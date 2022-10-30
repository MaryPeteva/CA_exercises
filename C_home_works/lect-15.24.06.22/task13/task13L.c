#include"task13H.h"

struct node *top = NULL;
struct node *base = NULL;

void fillStack(int size)
{
    int input = 0;
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter a number to push to stack:\n");
        scanf("%d", &input);
        push(input);
    }
}

void push(int item)
{
    struct node *nptr = malloc(sizeof(struct node));
    nptr->data = item;
    nptr->next = NULL;
    
    if(base == NULL && top == NULL)
    {
        base = nptr;
        top = nptr;
    }
    else
    {
        top->next = nptr;
        top = nptr;
    }
}

void display()
{
    struct node *temp;
    temp = base;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

void changeNthElement(int searchedElement, int newValue , int size)
{
    if(searchedElement > size)
    {
        printf("404 index not found!");
    }
    else
    {
        struct node* tmp;
        tmp = base;

        for (size_t i = 0; i < searchedElement; i++)
        {
            tmp = tmp->next;
        }

        tmp->data = newValue;
    }
}