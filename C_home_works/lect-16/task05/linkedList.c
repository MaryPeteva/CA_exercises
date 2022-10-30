#include <stdlib.h>
#include "linkedList.h"

struct List *listInit()
{
    List *tmp = malloc(sizeof(List));
    tmp->head = NULL;

    return tmp;
}

void addElement(List *listt, int data)
{
    Node *tmp = malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;
    tmp->prev = NULL;

    if (listt->head == NULL)
    {
        listt->head = tmp;
    }
    else
    {
        Node *ptr;
        ptr = listt->head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = tmp;
        tmp->prev = ptr;
    }
}

void addElementInMiddle(List *listt, int data)
{
    Node *ptr_middle, *ptr_end;
    ptr_end = listt->head;
    ptr_middle = listt->head;

    while (ptr_end != NULL)
    {
        ptr_end = ptr_end->next->next;
        ptr_middle = ptr_middle->next;
    }
    
    Node *tmp = malloc(sizeof(Node));

    tmp->data = data;
    tmp->prev = ptr_middle;
    tmp->next = ptr_middle->next;
    ptr_middle->next->prev = tmp;
    ptr_middle->next = tmp;
}

void fillList(List *listt)
{
    for (size_t i = 0; i < 10; i++)
    {
        addElement(listt, i);
    }
}

void display(List *listt)
{
    Node *ptr;
    ptr = listt->head;

    while (ptr != NULL)
    {
        printf(" %d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}