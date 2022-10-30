#include"task06H.h"

int readInput()
{
    printf("Enter a year:\n");
    int year;
    scanf("%d",&year);

}

bool isTheYearLeap(int year)
{
    bool isLeap = false;
    
    if(year%4==0 || year%400==0)
    {
        isLeap = true;
    }
    else
    {
        isLeap = false;
    }

    return isLeap;
}

int calculateSeconds(bool isLeap)
{
    int seconds;
    if(isLeap)
    {
        seconds = 366*24*60*60;
    }
    else
    {
        seconds = 365*24*60*60;
    }

    printf("%d",seconds);
}