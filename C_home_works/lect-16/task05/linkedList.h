#ifndef linked_List
#define linked_List

#include "stdio.h"

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;


typedef struct List
{
    Node *head;
}List;

struct List *listInit();
void display(List *listt);
void fillList(List *listt);
void addElement(List *listt, int data);
void addElementInMiddle(List *listt, int data);


#endif