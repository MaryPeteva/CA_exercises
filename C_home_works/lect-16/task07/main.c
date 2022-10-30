/*  Напишете програма за триене на елемент от двойно свързан списък по
зададена позиция в него.*/
#include "linkedList.h"

int main()
{   
    List *listt = listInit();

    fillList(listt);

    int element = 0;
    printf("Enter count: ");
    scanf("%d", &element);

    deleteElement(listt, element);
    display(listt);
    
    return 0;
}
