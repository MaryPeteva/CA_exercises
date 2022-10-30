#include"task07H.h"

void readNum()
{
    int iNum;
    do
    {
        printf("Enter a number:\n");
       scanf("%d",&iNum);
    } while (iNum <= 2 || iNum > 12);

}