#include"header04b.h"

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