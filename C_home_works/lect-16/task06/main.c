/* Напишете програма за триене на N-тия елемент от края на двойно
свързан списък*/
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
