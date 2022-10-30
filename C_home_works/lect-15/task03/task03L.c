#include "task03H.h"

void fillArray(int array[SIZE][SIZE])
{
    int rows = SIZE;
    int cols = SIZE;

    int firstElement = 1;
    int secondElement = 20;

    for (size_t i = 0; i < cols; i++)
    {
        for (size_t j = 0; j < rows; j++)
        {
            if (j == i)
            {
                array[j][i] = 0;
            }
            else if (j > i)
            {
                array[j][i] = firstElement;
                firstElement++;
            }
            else
            {
                array[j][i] = secondElement;
                secondElement--;
            }
            
        }
    }
}

void display(int array[SIZE][SIZE])
{
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}