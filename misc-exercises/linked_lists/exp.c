#include <stdio.h>
#include <stdlib.h>

// define a node for the linked list
struct node
{
    int data;
    struct node *next;      // pointer for next node; NULL for last node
};

struct node *BuildOneTwoThree()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    // head = malloc(sizeof(struct node));
    // second = malloc(sizeof(struct node));
    // third = malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    return head;
}

// Add a node and change the head to point to the new node
void Push(struct node **head, int n)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = NULL;
    *head = new_node;
}

// Compute the length of a linked list
int Length(struct node *head)
{
    int count = 0;
    struct node *current_node = head;

    while(current_node != NULL){
        ++count;
        current_node = current_node->next;
    }
    return count;
}

// Add node at head
void AddAtHead(struct node **head, int n)
{
    Push(*head, n);
}


// Add node to the tail (append)
void AppendNode(struct node **head, int n)
{
    struct node *current_node = *head;
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = NULL;

    if (current_node == NULL) {
        *head = new_node;
    }
    else
    {
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }    
}

struct node *AppendNodeWithPush(struct node **head, int n)
{
    struct node *current_node = *head;

    if (current_node == NULL)
        push(head, n);
    else {
        while (current_node->next != NULL)
            current_node = current_node->next;
        push(current_node->next, n);
    }
}

struct node *CopyList(struct node *head)
{
    struct node *current_node = head;
    struct node *newList = NULL;
    struct node *tail = NULL;

    while(current_node != NULL){
        if (newList == NULL) {
            newList = malloc(sizeof(struct node));
            newList->data = current_node->data;
            newList->next = NULL;
            tail = newList;
        }
        else
        {
            tail->next = malloc(sizeof(struct node));
            tail = tail->next;
            tail->data = current_node->data;
            tail->next = NULL;
        }
        current_node = current_node->next;
    }
}