#include "task10H.h"

void checkEqual(int *array1, int *array2, int count)
{
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            if (array1[i] == array2[j])
            {
                printf("array1: %d\t\tarray2: %d", array1[i], array2[j]);
                printf("\n");
            }
        }   
    }
}

void fillArray(int *array, int count)
{
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
}

int *makeArray(int *array1, int *array2, int count)
{
    int *result = malloc(sizeof(int) * count);

    for (size_t i = 0; i < count; i++)
    {
        result[i] = array1[i] + array2[i];
    }

    return result;
}

void display(int *array, int count)
{
    for (size_t i = 0; i < count; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}