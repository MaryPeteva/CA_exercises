#include"task03H.h"

char readInput(char *pntr)
{
    printf("Would you like a caravan or a camper?\n");
    scanf("%s", pntr);

    return *(pntr);
}

int readCountWanted(int count)
{
    printf("How many would you want?\n");
    scanf("%d",&count);

    return count;
}

int readDays(int days)
{
    /*------free essays----------
    ask how many days and how many caravans/campers*/
    printf("How many days will you rent them?\n");
    scanf("%d",&days);
    return days;
}

int calculatePrice(char *pntr, int count,int days)
{
    int caravanPrice = 90;
    int camperPrice = 100;
    int totalPrice;
    char compare[]="caravan";
    int resulst = strcmp(compare,pntr);
    printf("%d",resulst);
    if(resulst != 0)
    {
        totalPrice = (count*caravanPrice)*days;
    }
    else
    {
        totalPrice = (count*camperPrice)*days;
    }
    
    return totalPrice;

}