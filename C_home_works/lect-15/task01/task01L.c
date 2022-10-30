#include "task01H.h"



node *head = NULL;
node *tail = NULL;

void enqueue(int num)
{
    node *tmp = malloc(sizeof(node));
    tmp->data = num;
    tmp->next = NULL;

    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        node *ptr;
        ptr = head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        
        ptr->next = tmp;
        tail = tmp;
    }   
}

void fillList(int count)
{
    do
    {
        int num = 0;
        printf("Enter num: ");
        scanf("%d", &num);

        if (num >= 1 && num <= 101)
        {
            enqueue(num);
            count--;
        }
        else
        {
            printf("Invalid number\n");
        }
        
    } while (count > 0);   
}

void display()
{
    node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        printf(" %d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void displayEvenOdd()
{
    node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        if (ptr->data % 2 != 0)
        {
            printf(" %d, ", ptr->data);
        }

        ptr = ptr->next;
    }
    

    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data % 2 == 0)
        {
            printf(" %d, ", ptr->data);
        }

        ptr = ptr->next;
    }
    printf("\n");
}