/*Напишете програма, която при дадена редица изтрива всички числа, които
се срещат нечетен брой пъти. За целта използвайте функция.
Пример:
array = {4, 2, 2, 5, 2, 3, 2, 3, 1, 5, 2}
 {5, 3, 3, 5}
*/

#include "task14H.h"

int main()
{   
    int count = 0;
    printf("Enter count: ");
    scanf("%d", &count);

    int array1[count];
    fillArray(array1, count);

    int *result = createArray(array1, count);
    display(result, result[0]);
    
    return 0;
}