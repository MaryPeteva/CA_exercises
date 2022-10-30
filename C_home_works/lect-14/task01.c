/*
Write a function to split a given singly linked list of integers, c
two lists as follows.
If the original list is L = (l0, l1, ....., ln), then
newly received lists R1 = (l0, l2, l4, .....) и R2 = (l1, l3, l5, ....)*/
/*split in two: one for even positions one for odd positions*/

#include<stdio.h>
#include<stdlib.h>
/**/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(node*, int);
void display(node*);
void sort(node*, node*, node*, int);
void move(node*, node*);

int main()
{
    //init the original list and the two list we want to create
    node originList;
    node oddList;
    node evenList;
    //ask for lenght of the original list
    int originLen = 0;
    printf("Enter a number of member you want in the list:\n");
    scanf("%d", &originLen);
    int i = 0;
    int val = 0;
    for ( i = 0; i < originLen; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(&originList, val);
    }

    printf("The original list is:\n");
    display(&originList);
    sort(&originList, &evenList, &oddList, originLen);
    printf("List with even positions:\n");
    display(&evenList);
    printf("List with odd positions:\n");
    display(&oddList);
}

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

    node *newOdd = oddList, *newEven = evenList;

    int i = 0;
    for ( i = 0; i < len; i++)
    {
        if(i % 2 == 0)
        {
            evenList->value = originList->value;
            evenList = evenList->next;
        }
        else
        {
           oddList->value = originList->value;
           oddList = oddList->next;
        }
        
    }
    
    return;

}