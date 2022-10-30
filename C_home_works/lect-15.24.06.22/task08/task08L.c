#include "task08H.h"

void straightNumbers(node *subList, node *originalList)
{
    node *ptr;
    ptr = originalList;

    int backupNumber = ptr->value;
    ptr = ptr->next;
    int current = ptr->value;
    int count = 0;
    int epicCount = 0;
    int result = 0;
    int currentIndex = 0;
    int tmpIndex = 0;
    int totalIndex = 0;
    int flag = 0;

    while (ptr != NULL)
    {
        
        backupNumber = current;
        current = ptr->value;

        currentIndex++;

        if (current == backupNumber)
        {
            count++;
            if (flag == 0)
            {
                tmpIndex = currentIndex;
            }
            flag++;
        }
        else
        {
            count = 0;
            flag = 0;
        }

        if (epicCount <= count)
        {
            epicCount = count + 1;
            result = current;
            totalIndex = tmpIndex;
        }
        ptr = ptr->next;
    }

    ptr = originalList;  

    printf("SubList:\n");
    printf("Index: %d\n", totalIndex);
    printf("Count: %d\n", epicCount);

    while (ptr != NULL)
    {
        if (ptr->value == result)
        {
            fillList(&subList, result);
        }
        ptr = ptr->next;
    }

    display(subList);
}
 
void fillList(node **head, int inputValue) 
{ 
    node *ptr1 = (node*)malloc(sizeof(node)); 
    ptr1->value = inputValue; 
    ptr1->next = *head; 
    *head = ptr1; 
}

void display(node *head)
{
    node *temp = head; 
    printf("\n"); 
    while (temp!=NULL) 
    { 
        printf("%d ", temp->value); 
        temp = temp->next; 
    } 
    printf("\n");
}
 
void bubbleSort(node *head) 
{ 
    int swapped; 
    node *pntr1; 
    node *pntr2 = NULL; 
 
    /* Checking for empty list */
    if (head == NULL) 
        return; 
 
    do
    { 
        swapped = 0; 
        pntr1 = head; 
 
        while (pntr1->next != pntr2) 
        { 
            if (pntr1->value > pntr1->next->value) 
            { 
                swap(pntr1, pntr1->next); 
                swapped = 1; 
            } 
            pntr1 = pntr1->next; 
        } 
        pntr2 = pntr1; 
    } 
    while (swapped); 
 
    printf("Bubble:\n");
    display(head);   
} 
 
/* function to swap data of two nodes a and b*/
void swap(node *firstVal, node *secondValue) 
{ 
    int temp = firstVal->value; 
    firstVal->value = secondValue->value; 
    secondValue->value = temp; 
} 