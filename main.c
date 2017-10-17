#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
}Node;

Node *head = NULL;
Node *end = NULL;

int main()
{

    return 0;
}

void insert (int num)
{
    Node *temp = (Node*) malloc(sizeof(Node));
    temp->data = num;
    temp->next = head;

    head = temp;

}

void print ()
{

}

