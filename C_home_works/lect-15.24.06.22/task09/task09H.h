#ifndef HOMEWORK
#define HOMEWORK

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

typedef struct linkedList
{
    struct node *head;
    struct node *bottom;
}linkedList;


struct linkedList *listInit();

void display(linkedList *list);
void fillList(linkedList *list, int from, int to);
void addElement(linkedList *list, int number);

#endif