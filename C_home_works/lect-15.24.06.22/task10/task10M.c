/*Напишете функция, която по дадени два масива извежда общите им
елементи.
Напишете друга функция, която по дадени двата масива, извежда
обединението на техните елементи*/
#include "task10H.h"

int main()
{   
    int count = 0;
    printf("Enter count: ");
    scanf("%d", &count);

    printf("First array:\n");
    int array1[count];
    fillArray(array1, count);
    display(array1, count);

    printf("Second array:\n");
    int array2[count];
    fillArray(array2, count);
    display(array2, count);

    checkEqual(array1, array2, count);

    printf("Result array:\n");
    int *result = makeArray(array1, array2, count);
    display(result, count);

    free(result);
    return 0;
}