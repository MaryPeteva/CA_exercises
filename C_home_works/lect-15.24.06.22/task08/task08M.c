/*8. Напишете метод, който намира най-дългата поредица от равни числа в даден
списък от int и връща като резултат нов списък от int със тази подредица.
Напишете програма, която проверява дали тази функция работи коректно.
Упътване:
Сортирайте списъка и след това с едно обхождане намерете началния индекс и броя
елементи на най-дългата поредица от равни числа. Направете нов списък и го
попълнете с толкова на брой елементи.*/
#include "task08H.h"

int main()
{
    node *originalList = NULL;
    int size = 0;
    printf("Enter a size for the list:\n");
    scanf("%d", &size);
    int num = 0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &num);
        fillList(&originalList,num);
    }
 
    display(originalList);
    bubbleSort(originalList);

    node *subList = NULL;
    straightNumbers(subList, originalList);
}