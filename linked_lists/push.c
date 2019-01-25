#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;           // store data
    struct node *next;  // pointer to the next node
};

struct node *BuildOne()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // allocate pointers in the heap
    head = malloc(sizeof(struct node));

    /* initialize the node with their corresponding data
       and pointer to next node */
    head->data = 1;
    head->next = NULL;

    return head;
}

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

int main(int argc, char const *argv[])
{
    struct node *mylist = BuildOne();
    // Add nodes to the front of mylist
    push(&mylist, 10);
    push(&mylist, 30);
    push(&mylist, 20);

    printf("first element = %d\n", mylist->data);
    printf("last element = %d\n", mylist->next->next->next->data);
    return 0;
}
