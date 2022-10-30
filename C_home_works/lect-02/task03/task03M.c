#include"task03H.h"

void main(char str[])
{   //if the price is for one caravan/camper
    //3 caravans 90 lv/day; 3 campers 100lv/day
    // ?wanted: caravan or camper
    //print the price 


    char input[10];
    char *pntr = input;
    *pntr = readInput(pntr);
    int count = readCountWanted(count);
    int days = readDays(days);
    printf("Your bill is : %d\n",calculatePrice(pntr,count, days));
}