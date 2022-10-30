#include <stdlib.h>
#include "linkedList.h"

struct List *listInit()
{
    List *tmp = malloc(sizeof(List));
    tmp->head = NULL;
    tmp->tail = NULL;
    
    return tmp;
}

void addElement(List *listt, int data)
{
    Node *tmp = malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;
    tmp->prev = NULL;

    if (listt->head == NULL && listt->tail == NULL)
    {
        listt->head = tmp;
        listt->tail = tmp;
    }
    else
    {
        listt->tail->next = tmp;
        tmp->prev = listt->tail;
        listt->tail = tmp;
    }
}

void deleteElement(List *listt, int count)
{
    Node *tmp;
    tmp = listt->tail;

    for (size_t i = 0; i < count; i++)
    {
        tmp = tmp->prev;
    }
    
    if (tmp == NULL)
    {
        printf("No such element\n");
        exit(0);
    }
    else if(tmp == listt->head)
    {
        listt->head = listt->head->next;
        listt->head->prev = NULL;
        free(tmp);
    }
    else
    {
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
        free(tmp);
    }

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