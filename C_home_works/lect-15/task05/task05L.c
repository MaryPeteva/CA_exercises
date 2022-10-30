#include "task05H.h"

int *newArray(int *array, int *array2)
{
    for (size_t i = 0; i < 8; i++)
    {
        if (array[i] > 0)
        {
            array2[0]++;
        }
        else if(array[i] == 0)
        {
            array2[1]++;
        }
        else
        {
            array2[2]++;
        }
    }

    return array2;
}

void display(int *array)
{
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void procent(int *array, int count)
{
    
    for (size_t i = 0; i < 3; i++)
    {
        float num =(float) array[i] * ((float) count / 100);
        printf("%f\t", num);
    }
    printf("\n");
}