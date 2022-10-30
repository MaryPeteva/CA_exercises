/*
Write a function to insert node 't' before node indicated by 'X' in
singly linked list 'L'.*/
#include<stdio.h>
#include<stdlib.h>
/*DONT TOUCH!!!!*/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(int);
void display();
void insertNewNode(int, int);

int main()
{
    
    int len = 0;
    printf("Enter a number of member you want in the list:\n");
    scanf("%d", &len);
    int i = 0;
    int val = 0;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(val);
    }

    display();
    int searchedX = 0;
    int newT = 0;
    printf("Enter a value you want to put the new node before:\n");
    scanf("%d", &searchedX);
    printf("Enter the new value:\n");
    scanf("%d", &newT);
    insertNewNode(searchedX, newT);
    display();
}

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