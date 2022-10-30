/*Task 3. Modeling the game "Rosary": N children stand in a circle and receive
numbers 1 to N. Starting with child 1, clockwise
M children are counted. Child with number M leaves the circle, then starts a new count from
the next child. This continues until there is only one child left whose number needs to be determined.*/
#include<stdio.h>
#include<stdlib.h>
/*WORK!DONT'T TOUCH ANYMORE!!!!!!*/
typedef struct t_node 
{
    int value;
    struct t_node* next;
}t_node;

t_node *head = NULL, *tail = NULL;

void insert(int);
void delete(int, t_node** start);
void display();

int main()
{
    printf("Enter number of players:\n");
    int players = 0;
    scanf("%d", &players);
    int numN = 1;

    for (int i = 0; i < players; i++)
    {
        insert(numN);
        numN++;
    }


    tail->next = head;
    display();
    t_node *current = head;
    int numM = 0;

    do
    {
        printf("Enter a number to count:\n");
        scanf("%d", &numM);
        delete(numM, &current);
        players--;
        printf("Players left after eliminating: %d\n", players);

    } while (players > 1);
       
}

void insert(int inputValue)
{
    t_node* newNode;
    newNode = (t_node*)malloc(sizeof(t_node));

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
}

void delete(int pos, t_node **start)
{

    int i = 0;

    for ( i = 0; i < pos - 1; i++)
    {
        (*start) = (*start)->next;
    }
    
    t_node *del = (*start)->next;

    if(del == head)
    {
        head = head->next;
    }

    (*start)->next = (*start)->next->next;

    printf("Player eleminated is: %d\n", del->value);
    del->next = NULL;
    free(del);
    display();
}

void display()
{
   t_node *temp;    
    temp = head;         
    do
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
    }while(temp != head);
    printf("\n");
    
}