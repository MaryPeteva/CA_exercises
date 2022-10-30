/*Task 2. Make a singly linked list containing
the numbers 1-14 and print the fifth element from its end.*/
#include<stdio.h>
#include<stdlib.h>
#define LIST_SIZE 14
typedef struct t_node {
 int m_nValue;
 struct t_node* m_pNext;
} t_node;
t_node *head=NULL,*tail=NULL;
void insert(int);
void displayList();
void fifthElement();
int main()
{
    int num = 1;
    for (int i = 0; i < LIST_SIZE; i++)
    {
        insert(num);
        num++;
    }
    displayList();
    fifthElement();
}

void insert(int value)
{
    t_node *newnode;  
    newnode = (t_node *)malloc(sizeof(t_node)); 
 
    newnode->m_nValue = value;      
    newnode->m_pNext = NULL;    
 
    if(head==NULL)     
    {
        head = newnode;
        tail = newnode;
    }
    else                
    {
        tail->m_pNext=newnode;    
        tail=newnode;  
    }         
    return ;
}

void displayList()
{
    t_node *temp;    
    temp = head;         
    while(temp != NULL)
    {
        if(temp->m_pNext==NULL)
        {
            printf(" %d->NULL",temp->m_nValue);
        }
        else
        {
            printf(" %d->",temp->m_nValue);
        }
        temp = temp->m_pNext;            
    }
    printf("\n");
    
}
void fifthElement()
{
    t_node* temp = head;
    int i = 0;
  for (i = 1; i < LIST_SIZE - 4; i++)
  {
    
        temp = temp->m_pNext;

  }
    printf("The fifth to last element in the list is %d\n",temp->m_nValue);
    
}