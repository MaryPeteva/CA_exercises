#include"header01.h"
void insert( node* list, int inputValue)
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

void display(node* list)
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

void sort(node* originList, node* evenList, node* oddList, int len)
{

    int i = 0;
    for ( i = 0; i < len; i++)
    {
        if(i % 2 == 0)
        {
            move(originList, evenList);
        }
        else
        {
           move(originList, oddList);
        }
        
    }
    
    return;

}

void move(node* origin, node* dubl)
{
    node* newNode = origin;
    if( newNode != NULL )
    {
        origin = newNode->next;
        newNode->next = dubl;
        dubl = newNode;  
    }
}