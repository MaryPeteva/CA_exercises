#include"task04H.h"

char readInput()
{
    char input[30];
    char *pntr = input;
    char compare[] = "DONE";
    int result = 0;
    float bill = 0.0;
    printf("What would you want?\n"); 
    scanf("%s",input); 
    while ((result= strcmp(compare,input))!=0)
    {
                       
        bill += sum(pntr);
        
        printf("What would you want?\n"); 
        scanf("%s",input); 
    }

    printBill(bill);
}

float sum(char *pntr)
{
    float tomatoPrice= 4.5;
    float flourPrice = 1.8;
    float yogurtPrice = 0.5;
    float icecreamPrice = 0.6;
    float candyPrice = 1.5;
    float lollipopPrice = 0.15;
    char tomato[]="tomato";
    char flour[]="flour";
    char yogurt[]="yogurt";
    char icecream[]="icecream";
    char candy[]="candy";
    char lollipop[]="lollipop";
    float count = 0;
    int result = 0;
    float bill = 0; 

    printf("How much will it be?\n");
    scanf("%f",&count);

    if((result = strcmp(pntr,tomato))==0)
    {
        bill+=tomatoPrice*count;
    }
    else if((result = strcmp(pntr,flour))==0)
    {
        bill+=flourPrice*count;
    } 
    else if((result = strcmp(pntr,yogurt))==0)
    {
        bill+=yogurtPrice*count;
    } 
    else if((result = strcmp(pntr,icecream))==0)
    {
        bill+=icecreamPrice*count;
    } 
    else if((result = strcmp(pntr,candy))==0)
    {
        bill+=candyPrice*count;
    } 
    else if((result = strcmp(pntr,lollipop))==0)
    {
        bill+=lollipopPrice*count;
    } 
        
    return bill;
}

void printBill(float bill)
{
    printf("Your total is: %.2f",bill);
}
