#include"task01H.h"

int readNum(int iNum)
{
    printf("Enter a number:\n");
    scanf("%d",&iNum);

    return iNum;
}

int takeDigits(int iNum)
{
    int iYear = 0;
    int i = 0;
    int iIndex = 0;
    int rnd = 100000;
    for ( i = 1; i <= 6; i++)
    {
       if(i != 6)
       {
            iIndex = iNum / rnd;
       }
        switch (i)
        {
            case 1:
                iYear += iIndex * 1000;
            break;
            case 3:
                iYear += iIndex * 100;
            break;
            case 5:
                iYear += iIndex * 10;
            break;
            case 6:
                iYear += iNum;
            break;        
        }

        iNum -= iIndex * rnd;
        rnd /= 10; 
        
    }

    return iYear;
}

void theYearIsOtNotLeap(int iYear)
{
    if(iYear%4==0 || iYear%400==0)
    {
        printf("The year %d is leap year!\n",iYear);
    }
    else
    {
        printf("The year %d is not leap year!\n",iYear);
    }
}