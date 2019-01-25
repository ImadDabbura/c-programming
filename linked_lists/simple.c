#include <stdlib.h>
#include <stdio.h>

/*
Build a linked list {1, 2, 3} in the heap and return its head pointer.
*/
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

int main(int argc, char const *argv[])
{
    struct node *linked_list;

    linked_list = BuildOneTwoThree();
    printf("size of struct node = %lu\n", sizeof(struct node));
    printf("first element : data = %d, address = %p\n",
            linked_list->data, linked_list);
    printf("second element : data = %d, address = %p\n",
            linked_list->next->data, linked_list->next);
    printf("third element : data = %d, address = %p\n",
            linked_list->next->next->data, linked_list->next->next);
    printf("next address from last node = %p\n", linked_list->next->next->next);    // should be zero
    return 0;
}
