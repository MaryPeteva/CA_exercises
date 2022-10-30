/*Напишете рекурсивни функции
max, min, sum, product, mean,
за намиране съответно на максимум, минимум, сума, произведение и
средно аритметично на елементите на масив от цели числа.
Масивът и броят елементи в него се подават като параметри на
функциите . */
#include "19H.h"

int main()
{   
    int size = 0;
    printf("Enter size: ");
    scanf("%d", &size);

    int array[size];
    fillList(array, size);
    
    printf("Max: %d\n", max(array, 0, size));
    printf("Min: %d\n", min(array, 0, size));
    printf("Sum: %d\n", sum(array, size));
    printf("Product: %d\n", product(array, size));
    printf("Mean: %f\n",(float) mean(array, size));

    return 0;
}
