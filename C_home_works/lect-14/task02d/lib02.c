#include"header02.h"

void insert( int inputValue)
{
    node* newNode;
    newNode = (node*)malloc(sizeof(node));

    newNode->value = inputValue;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

    return;
    free(newNode);
}

void display()
{
   node *temp;    
    temp = head;         
    do
    {
        if(temp->next==NULL)
        {
            printf(" %d->NULL", temp->value);
        }
        else
        {
            printf(" %d->",temp->value);
        }
        temp = temp->next;            
    }while(temp != NULL);
    printf("\n");
    
}

void insertNewNode(int searchedX, int newT)
{

    node *newNode, *temp, *prevPntr;
    newNode = (node*)malloc(sizeof(node));
    newNode->value = newT;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;

        while(temp->value != searchedX)
        {
            prevPntr = temp;
            temp = temp->next;
        }

        newNode->next = temp;
        prevPntr->next = newNode;
    }
 
}