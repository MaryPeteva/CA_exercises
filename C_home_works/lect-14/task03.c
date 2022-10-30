/*Напишете функция, с която да да изтриете възел, посочен с „p“ от едносвързан списък „L“*/
#include<stdio.h>
#include<stdlib.h>
/*WHITE FLAG*/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(int);
void display();
void deleteNode(int);

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
    int searchedP = 0;
    printf("Enter a value you want to remove:\n");
    scanf("%d", &searchedP);
    
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

void deleteNode(int searchedP)
{
    
}
