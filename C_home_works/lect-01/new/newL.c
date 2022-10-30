#include"newH.h"

int insertionSort(int *pntr, int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = *(pntr + i);
        j = i - 1;
 
        while (j >= 0 && *(pntr + j) > key)
        {
            *(pntr + (j + 1)) = *(pntr + j);
            j = j - 1;
        }
        *(pntr + (j + 1)) = key;
    }
}
void printArray(int *pntr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {

        printf("%d\t",*(pntr + i));

    }
    
}