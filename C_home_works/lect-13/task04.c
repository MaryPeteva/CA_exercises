/*
Problem 4. Doubly linked list. Write a program that
adds and deletes an item from the list by a specified value that is stored in it.
Use the following doubly linked list element:*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * previous;
    struct node * next;
}*head = NULL, *tail = NULL;
 

void createList(int n);
void displayList(int m);
void deleteByValue(int inputValue);
void add(int inputValue);

int main()
{
    int size = 0;
    int numOne = 0;
    int rnd = 0;
    int pos = 0;
   	
    printf(" Input the number of nodes: ");
    scanf("%d", &size);
    createList(size); 
    rnd = 1;
    displayList(rnd);

    printf("Enter data to add:\n");
    scanf("%d", &rnd);
    add(rnd);
    rnd = 1;
    printf("After adding data:\n");
    displayList(rnd);

    printf("Enter data to delete:\n");
    scanf("%d", &rnd);
    deleteByValue(rnd);
    printf("After deleting:\n");
    rnd = 1;
    displayList(rnd);
 
    return 0;
}

void createList(int n)
{
    int i, num;
    struct node *tmp;
 
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
 
        if(head != NULL)
        {
            printf(" Input data for node 1 : ");
            scanf("%d", &num);
 
            head->num = num;
            head->previous = NULL;
            head->next = NULL;
            tail = head;
            for(i=2; i<=n; i++)
            {
                tmp = (struct node *)malloc(sizeof(struct node));
                if(tmp != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    tmp->num = num;
                    tmp->previous = tail;    
                    tmp->next = NULL;     
                    tail->next = tmp;  
                    tail = tmp;            
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}

void displayList(int m)
{
    struct node * tmp;
    int n = 1;
    if(head == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = head;
        if (m==1)
        {
        printf("\n Data entered in the list are :\n");
        }
        else
        {
         printf("\n After deletion the new list are :\n");   
        }
        while(tmp != NULL)
        {
            printf(" node %d : %d\n", n, tmp->num);
            n++;
            tmp = tmp->next; 
        }
    }
}

void deleteByValue(int inputValue)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp = head;

    while (tmp->num != inputValue)
    {
        tmp = tmp->next;
    }
    
    tmp->previous->next = tmp->next;

    free(tmp);

}

void add(int inputValue)
{
    struct node *tmp;
    struct node *newNode;
    newNode->num = inputValue;
    newNode->next = NULL;
    tmp = head;
    if(head == NULL)
    {
        newNode->previous = NULL;
        head = newNode;
    }
    else
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        
        tmp->next = newNode;
        newNode->previous = tmp;
    }
}