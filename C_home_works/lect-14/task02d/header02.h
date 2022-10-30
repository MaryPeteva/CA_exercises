#include<stdio.h>
#include<stdlib.h>
/*DONT TOUCH!!!!*/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(int);
void display();
void insertNewNode(int, int);