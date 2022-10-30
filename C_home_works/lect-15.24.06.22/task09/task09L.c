#include "task09H.h"

void addElement(linkedList *list, int number)
{
    node *tmp = malloc(sizeof(node));
    tmp->data = number;
    tmp->next = NULL;

    if (list->head == NULL && list->bottom == NULL)
    {
        list->head = tmp;
        list->bottom = tmp;
        return;
    }
    
    list->bottom->next = tmp;
    list->bottom = tmp;
    
}

void fillList(linkedList *list, int from, int to)
{
    for (; from <= to; from++)
    {
        int flag = 0;

        for (size_t i = 1; i < from; i++)
        {
            if (from % i == 0)
            {
                flag++;
            }
            if (flag >= 2)
            {
                break;
            }
        }

        if (flag == 1)
        {
            addElement(list, from);
        }
        
    }
}

void display(linkedList *list)
{
    node *ptr;
    ptr = list->head;

    while (ptr != NULL)
    {
        printf(" %d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct linkedList *listInit()
{
    linkedList *tmp = malloc(sizeof(linkedList));
    tmp->head = NULL;
    tmp->bottom = NULL;

    return tmp;
}