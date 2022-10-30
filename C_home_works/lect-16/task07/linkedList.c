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

void deleteElement(List *listt, int count)
{
    Node *tmp;
    tmp = listt->head;

    for (size_t i = 0; i < count; i++)
    {
        tmp = tmp->next;
    }
    
    if (tmp == NULL)
    {
        printf("No such element\n");
        exit(0);
    }
    else if(tmp->next == NULL)
    {
        tmp->prev->next = NULL;
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