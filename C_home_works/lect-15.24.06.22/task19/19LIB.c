#include "19H.h"

void fillList(int *array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
}

int max(int array[], int index, int len)
{
   int big;

    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    big = max(array, index + 1, len);

    if(array[index] > big)
        return array[index];
    else
        return big;
}

int min(int array[], int index, int len)
{
    int small;

    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    small = min(array, index + 1, len);

    if(array[index] < small)
        return array[index];
    else
        return small;
}

int sum(int *array, int size)
{
    if (size <= 0)
    {
        return 0;
    }
    return (sum(array, size - 1) + array[size - 1]);
}

//Ask for error
int product(int array[], int size)
{
    if (size == 0)
        return (array[size]);
    else
        return (array[size] * product(array, size - 1));
}

float mean(int *array, int size)
{
    return (float) sum(array, size) / size;
}
