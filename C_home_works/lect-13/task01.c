/*Write a program that adds and deletes an element from a list by position in the list.
Use the following dynamic list item:
typedef struct t_node {
 int m_nValue;
 t_node* m_pNext;
} t_node;*/
#include<stdio.h>
#include<stdlib.h>

typedef struct t_node {
 int value;
 struct t_node* next;
} t_node;
t_node *head=NULL,*tail=NULL;

void insert(int );
void chooseOption(int);
void displayList();
void deleteNode(int );
void addNode(t_node*,int, int,int);

int main()
{
    int listLengh = 0;
    printf("How long your list will be?\n");
    scanf("%d", &listLengh);
    int num = 0;
    for (size_t i = 0; i < listLengh; i++)
    {
        printf("Enter a number to add:\n");
        scanf("%d", &num);
        insert(num);
    }
    printf("Your list:\n");
    displayList();
    chooseOption(listLengh);
}

void insert(int inputValue)
{
    t_node *newnode;  
    newnode = (t_node *)malloc(sizeof(t_node)); 
 
    newnode->value = inputValue;      
    newnode->next = NULL;    
 
    if(head==NULL)   
    {
        head = newnode;
        tail = newnode;
    }
    else               
    {
        tail->next = newnode;    
        tail = newnode;  
    }         
    
}

void displayList()
{
    t_node *temp;    
    temp = head;         
    while(temp != NULL)
    {
        if(temp->next==NULL)
        {
            printf(" %d->NULL",temp->value);
        }
        else
        {
            printf(" %d->",temp->value);
        }
        temp = temp->next;            
    }
    printf("\n");
    
}

void chooseOption(int listLenght)
{
    printf("For deleting a position press 1 for adding a position press 2\n");
    int choice = 0;
    scanf("%d", &choice);
    int pos = 0;
    int value = 0;
    switch (choice)
    {
    case 1:
        printf("Enter a position to remove a node:\n");
        scanf("%d", &pos);
        deleteNode(pos);
        break;
    
    case 2:
        printf("Enter a position to add a node:\n");
        scanf("%d", &pos);
        printf("Enter a value to add to the node:\n");
        scanf("%d", &value);
        addNode(head,pos, value, listLenght);
        break;
    }
}

void deleteNode(int pos)
{/*WORKS!*/
    t_node *temp = head;       
    int i;                    
    if(pos == 0)
    {
        printf("Element deleted is : %d\n",temp->value);
        head = head->next;        
        temp->next = NULL;
        free(temp);             
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        
        t_node *del = temp->next;       
        temp->next = temp->next->next;
        printf("Element deleted is : %d\n",del->value);      
        del->next = NULL;
        free(del);                          
    }
    printf("Your list after deleting an element is : \n");
    displayList();
}

void addNode(t_node *current,int pos, int inputValue, int listLen)
{/*FINALLY!!!!!*/
   t_node *temp;
   t_node *pntr;
   temp = (t_node*)malloc(sizeof(t_node));
   temp->value = inputValue;
   int i = 0;
   if(pos == 0)
   {
        temp->next = head;
        head = temp;
   }
   else
   {
        for(i = 0, pntr = head; i < pos - 1; i++) 
        { 
            pntr = pntr->next;

            if( pntr == NULL )
            {
                printf("\nPosition not found:[Handle with care]\n");
                return;
            }
        }
                temp->next =pntr->next ;
                pntr->next=temp;
    }

    printf("Your list after addin a number %d on position %d\n", inputValue, pos);
    displayList();
}