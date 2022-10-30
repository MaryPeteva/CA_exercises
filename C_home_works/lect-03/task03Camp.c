#include<stdio.h>
#include<string.h>
void main(char str[])
{   //if the price is for one caravan/camper
    //3 caravans 90 lv/day; 3 campers 100lv/day
    // ?wanted: caravan or camper
    //print the price 

    int caravanPrice = 90;
    int camperPrice = 100;
    char input[10];
    printf("Would you like a caravan or a camper?\nEnter text here:");
    fgets(input,sizeof(input),stdin);
    printf("How many would you want?\n");
    int count;
    scanf("%d",&count);
    //------free essays----------
    //ask how many days and how many caravans/campers
    printf("How many days will you rent them?\n");
    int days;
    scanf("%d",&days);
    int totalPrice;
    char compare[]="caravan";
    int resulst = strcmp(compare,input);
    printf("%d",resulst);
    if(resulst==0)
    {
        totalPrice = count*camperPrice*days;
    }
    else
    {
        totalPrice = count*caravanPrice*days;
    }
    printf("Your bill is : %d\n",totalPrice);

}