#include"task05H.h"

int readNum(int num)
{

    printf("Enter a number:\n");
    scanf("%d",&num);

    return num;
}

void doesNumDividesBySeven(int iNum)
{
    if(iNum % 7 == 0)
    {
        printf("Yes!");
    }
    else
    {
        printf("No!");
    }
}