/*
Write a program to scrub the Nth element from the end of a doubly linked list.*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * previous;
    struct node * next;
}*head = NULL, *tail = NULL;
 

void createList(int n);
void deleteFirstNode();
void deleteLastNode();
void deleteNthNode(int pos);
void displayList(int a);

int main()
{
    int n = 0;
    int numOne = 0;
    int a = 0;
    int pos = 0;
   	
    printf(" Input the number of nodes: ");
    scanf("%d", &n);
    createList(n); 
    a=1;
    displayList(a);
    printf(" Input the position ( 1 to %d ) to delete a node : ",n);
    scanf("%d", &pos);

    
if(pos<1 || pos>n)
    {
     printf("\n Invalid position. Try again.\n ");
    }
	      if(pos>=1 && pos<=n)
      {
     
    deleteNthNode(pos);  
        a=2;
    displayList(a);
      }    
    return 0;
}
 
void createList(int n)
{
    int i, num;
    struct node *fnNode;
 
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
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->previous = tail;    
                    fnNode->next = NULL;     
                    tail->next = fnNode;  
                    tail = fnNode;            
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

void deleteNthNode(int pos)
{
    struct node *curNode;
    int i;
 
    curNode = head;
    for(i=1; i<pos && curNode!=NULL; i++)
    {
        curNode = curNode->next;
    }
 
    if(pos == 1)
    {
        deleteFirstNode();
    }
    else if(curNode == tail)
    {
        deleteLastNode();
    }
    else if(curNode != NULL)
    {
        curNode->previous->next = curNode->next;
        curNode->next->previous = curNode->previous;
 
        free(curNode); 
    }
    else
    {
        printf(" The given position is invalid!\n");
    }
} 

void deleteFirstNode()
{
    struct node * NodeToDel;
    if(head == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = head;
        head = head->next;   
        head->previous = NULL;      
        free(NodeToDel);           
    }
}

void deleteLastNode()
{
    struct node * NodeToDel;
 
    if(tail == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = tail;
        tail = tail->previous;    
        tail->next = NULL;     
        free(NodeToDel);            
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