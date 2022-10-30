#include "task16H.h"

int findBiggestSequence(int *array, int size, int k)
{
    int count = 0;
    int total = 0;

    for (size_t i = 0; i < size; i++)
    {
        count = 0;
        total = 0;
        for (size_t j = i; j < size; j++)
        {
            count++;
            total += array[j];
        }

        if (total % k == 0)
        {
            break;
        }
    }

    return count;
}

void fillArray(int *array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        do
        {
            printf("Enter number: ");
            scanf("%d", &array[i]);
        } while (!(array[i] >= 0 && array[i] <= 1000));   
    }
}