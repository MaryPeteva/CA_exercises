#include"task06H.h"

int readArr(int *pntr)
{
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", (pntr+i));
    }
    
    return *(pntr);
}

int compareNums(int *pntr)
{
    int tmp = 0;
    int i = 0;
    int j = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = i + 1; j < 3; j++)
        {
            if (*(pntr+i) > *(pntr+j))
            {
                tmp =  *(pntr + i);
                *(pntr + i) = *(pntr + j);
                *(pntr + j) = tmp;
            }
        }
    }

    return *(pntr);
}

void printArr(int *pntr)
{
    for (int i = 0; i < 3; i++)
    {

        printf("%d\n", *(pntr + i));

    }
}