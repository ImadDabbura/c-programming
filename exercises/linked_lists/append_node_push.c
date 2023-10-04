#include <stdlib.h>

struct node {
    int data;           // store data
    struct node *next;  // pointer to the next node
};

void push(struct node **headref, int data)
{
/*
parameters:
-----------
1. A pointer to a pointer to node
2. A number that will be stored in the new node

Instructions:
-------------
1. Aecalare and allocate memory in the heap for new node
2. Set-up data to be the given parameter
3. Make the new node point the same thing the given node was pointed to
4. Make the given node point to the new node
*/
    // declare and allocate heap for the new node
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    // since headref is a pointer to a pointer,
    // we use *headref to access actual pointer
    newnode->next = *headref;
    // set the headref pointer to point to the newnode
    *headref = newnode;
}

struct node *append_node(struct node **headRef, int n)
{
    struct node *current_node = *headRef;
    
    if (current_node == NULL)
        push(headRef, n);
    else {
        while (current_node->next != NULL)
            current_node = current_node->next;
        push(&(current_node->next), n);
    }
}
