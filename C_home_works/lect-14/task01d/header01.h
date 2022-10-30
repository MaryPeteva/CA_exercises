#include<stdio.h>
#include<stdlib.h>
/*FIX THE DISPLAY*/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(node*, int);
void display(node*);
void sort(node*, node*, node*, int);
void move(node*, node*);