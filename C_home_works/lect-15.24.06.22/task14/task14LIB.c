#include "task14H.h"

int *createArray(int *array, int count)
{
    int *result = malloc(sizeof(int) * count);
    int index = 1;
    int checkOdd = 0;

    for (size_t i = 0; i < count; i++)
    {
        int checkEven = 1;
        for (size_t j = 0; j < count; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (array[i] == array[j])
            {
                checkEven++;
            }
        }
        
        if (checkEven % 2 == 0)
        {
            result[index] = array[i];
            index++;
        }
        else
        {
            checkOdd++;
        }
    }

    result =(int *) realloc(result, count - checkOdd + 1);
    result[0] = count - checkOdd;

    return result;
}

void fillArray(int *array, int count)
{
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
}

void display(int * array, int count)
{
    for (size_t i = 1; i <= count; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}