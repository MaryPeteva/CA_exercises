#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
} node;

void insert(node**, int);
void display(node*);
node* concatLists(node**,node**, int);