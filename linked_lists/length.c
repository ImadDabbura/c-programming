#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;           // store data
    struct node *next;  // pointer to the next node
};

struct node *BuildOneTwoThree()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // allocate pointers in the heap
    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    /* initialize the node with their corresponding data
       and pointer to next node */
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    return head;
}

int length(struct node *head)
{
    // copy the address of the structure
    struct node *current = head;
    int count = 0;

    while (current != NULL){
        count += 1;
        current = current->next;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    struct node *mylist = BuildOneTwoThree();
    int len = length(mylist);

    printf("length of linked list  = %d\n", len);
    return 0;
}