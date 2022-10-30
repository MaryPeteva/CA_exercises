/*Използвайте динамична реализация на стек за въвеждане на поредица от цели положителни
числа и нейното извеждане върху екрана в обратен ред. За край на поредицата от
клавиатурата се въвежда 0.*/

#include<stdio.h>
#include<stdlib.h>

struct stack
{
 int value;
 struct stack *next;
};

typedef struct stack node;
node *start=NULL;
node *top = NULL;

int main()
{
    unsigned int input = 0;
    do
    {
        
    } while ((scanf("%d", &input)) != 0);
    
}

void push(node *newnode)
{
    node *temp;
    if( newnode == NULL )
    {
        printf("\n Stack Overflow..");
        return;
    }
    
    if(start == NULL)
    {
        start = newnode;
        top = newnode;
    }
    else
    {
        temp = start;
        while( temp -> next != NULL)
            temp = temp -> next;
        
        temp -> next = newnode;
        top = newnode;
    }
}