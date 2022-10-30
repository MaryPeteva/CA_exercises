#include"task08H.h"

void printStep()
{
    int iCount = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j < iCount; j++)
        {
            printf(" ");
        }
        iCount+=6;
        for (k = 0; k < 6; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}