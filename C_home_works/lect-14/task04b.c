/*Да предположим, че подреден списък L = (l0, l1, .....,ln) е представен от единичен свързан
списък. Добавете списъка L = (ln, l0, l1, ....., ln) след друг подреден списък M, представен от
единично свързан списък*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
} node;

void insert(node**, int);
void display(node*);
node* concatLists(node**,node**, int);

int main()
{
    node* listL;
    node* listM;
    node* listLM;
    int len = 0;
    int totalLen = 0;
    printf("Enter a number of member you want in the L list:\n");
    scanf("%d", &len);
    totalLen += len;
    int i = 0;
    int val = 0;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(&listL,val);
    }
    display(listL);

    printf("Enter a number of member you want in the M list:\n");
    scanf("%d", &len);
    totalLen += len;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;
        insert(&listM,val);
    }
    display(listM);

    printf("Concatenated lists:\n");
    listLM = concatLists(&listL, &listM, totalLen);
    display(listLM);
}

void insert( node** list, int inputValue)
{
    node *pntr, *temp;
    temp = (node*)malloc(sizeof(node));
    temp->value = inputValue;
    temp->next = NULL;

    if(*list == NULL)
    {
        *list = temp;
    }
    else
    {
        pntr = *list;

        while (pntr->next != NULL)
        {
            pntr = pntr->next;
        }

        pntr->next = temp;
        
    }
}

void display(node* list)
{
   while (list != NULL)
   {
        printf(" %d->", list->value);
        list = list->next;
   }

   printf("NULL\n");
   
    
}

node* concatLists(node** listL,node** listM, int len)
{
    node *pntrL, *pntrM, *pntr;
    pntrL = *listL;
    pntrM = *listM;
    for (int i = 0; i < len-2; i++)
    {
        if(pntrL->next != NULL)
        {
            insert(&pntr,pntrL->value);
            pntrL = pntrL->next;
        }/*препокрива последния елемент,как се избягва?*/
        else
        {
            insert(&pntr,pntrM->value);
            pntrM = pntrM->next;
        }
    }
    
    return (pntr);
}