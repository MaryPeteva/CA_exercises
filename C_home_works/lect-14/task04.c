/*Да предположим, че подреден списък L = (l0, l1, .....,ln) е представен от единичен свързан
списък. Добавете списъка L = (ln, l0, l1, ....., ln) след друг подреден списък M, представен от
единично свързан списък*/
#include<stdio.h>
#include<stdlib.h>
/*още на попълване слива втория с първия
защото head е глобална,та правилна ли е в крайна сметка :D*/
typedef struct node
{
    int value;
    struct node* next;
} node;
node *head = NULL, *tail = NULL;

void insert(node*, int);
void display();

int main()
{
    node* listL;
    node* listM;
    int len = 0;
    printf("Enter a number of member you want in the L list:\n");
    scanf("%d", &len);
    int i = 0;
    int val = 0;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(listL,val);
    }
    display(listL);
    printf("Enter a number of member you want in the M list:\n");
    scanf("%d", &len);
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;
        insert(listM,val);
    }
    display(listM);
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