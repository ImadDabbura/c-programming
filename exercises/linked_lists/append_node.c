#include <stdlib.h>

struct node {
    int data;           // store data
    struct node *next;  // pointer to the next node
};

struct node *append_node(struct node **headRef, int n)
{
    struct node *current_node = *headRef;
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = NULL;

    if (current_node == NULL)
        *headRef = new_node;
    else {
        // iterate over all list to get to the last node
        while (current_node != NULL)
            current_node = current_node->next;
        current_node->next = new_node;
    }
}