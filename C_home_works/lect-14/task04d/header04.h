#include<stdio.h>
#include<stdlib.h>
/*още на попълване слива втория с първия
защото head е глобална*/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(node*, int);
void display();