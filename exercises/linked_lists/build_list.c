#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;           // store data
    struct node *next;  // pointer to the next node
};

void push(struct node **headref, int data)
{
    // declare and allocate heap for the new node
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    // since headref is a pointer to a pointer,
    // we use *headref to access actual pointer
    newnode->next = *headref;
    // set the headref pointer to point to the newnode
    *headref = newnode;
}

struct node *add_at_head()
{
    // define the first node
    struct node *head = NULL;
    int i;

    // iterate to build list {1, 2, 3, 4, 5}
    for (i = 1; i <= 5; i++)
        push(&head, i);
    
    // head now point to 5
    return head;
}

struct node *add_at_tail()
{
    // define the first node
    struct node *head = NULL;
    struct node *tail;

    push(&head, 1);
    tail = head;

    int i;
    // iterate to build list {1, 2, 3, 4, 5}
    for (i = 2; i <= 5; i++)
        push(&tail->next, i);
        tail = tail->next;
    
    // head now point to 5
    return head;
}

int main(int argc, char const *argv[])
{
    struct node *head = add_at_head();
    struct node *current_node = head;

    // printf("%lu\n", sizeof(current_node));
    // printf("%d\n", current_node->next->next->next->next->data);
    printf("{ ");
    while (current_node != NULL){
        printf("%d, ", current_node->data);
        current_node = current_node->next;
    }
    printf("}\n");
    return 0;
}
