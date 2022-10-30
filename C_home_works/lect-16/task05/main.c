/* Напишете програма за въвеждане на елемент по средата на двойно
свързан списък*/
#include "linkedList.h"

int main()
{   
    List *listt = listInit();

    fillList(listt);

    int element = 0;
    printf("Enter element: ");
    scanf("%d", &element);

    addElementInMiddle(listt, element);
    display(listt);
    
    return 0;
}
