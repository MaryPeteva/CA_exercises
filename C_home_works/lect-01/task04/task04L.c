#include"task04H.h"

int readNum(int iNum)
{
    printf("Enter a number:\n");
    scanf("%d",&iNum);

    return iNum;
}
int calculateSumOfDigits(int iNum)
{
    int iSum = 0;
    for (int i = 0; i < 4; i++)
    {
       
        iSum += iNum%10;
        iNum =iNum/10;
        
    }

   return iSum;
}