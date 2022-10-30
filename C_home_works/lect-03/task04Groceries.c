#include<stdio.h>
#include<string.h>
void main()
{  
    //tomato = 4.5lv/kg,flour = 1.80lv/kg,yogurt=0.50lv/br,
    //icecream = 0.60lv/br,candy = 1.50lv/kg,lollipop = 0.15lv/br
    //read the wanted item;calculate the price
    //read until "DONE"
    float tomatoPrice= 4.5;
    float flourPrice = 1.8;
    float yogurtPrice = 0.5;
    float icecreamPrice = 0.6;
    float candyPrice = 1.5;
    float lollipopPrice = 0.15;
    float count;
    float sum = 0;
    char compare[]="DONE";
    char input[30];
    int resulst;
      printf("What would you want?\n"); 
      scanf("%s",input); 
    while ((resulst= strcmp(compare,input))!=0)
    {
       
        char tomato[]="tomato";
        char flour[]="flour";
        char yogurt[]="yogurt";
        char icecream[]="icecream";
        char candy[]="candy";
        char lollipop[]="lollipop";

    // if(strcmp(input,tomato)==0||strcmp(input,flour)==0||strcmp(input,yogurt)||
    //strcmp(input,icecream)==0||strcmp(input,candy)==0||strcmp(input,lollipop)==0)
       
            printf("How much will it be?\n");
            scanf("%f",&count);

            if((resulst = strcmp(input,tomato))==0)
        {
            sum+=tomatoPrice*count;
        }
        else if((resulst = strcmp(input,flour))==0)
        {
            sum+=flourPrice*count;
        } 
        else if((resulst = strcmp(input,yogurt))==0)
        {
            sum+=yogurtPrice*count;
        } 
        else if((resulst = strcmp(input,icecream))==0)
        {
            sum+=icecreamPrice*count;
        } 
        else if((resulst = strcmp(input,candy))==0)
        {
            sum+=candyPrice*count;
        } 
        else if((resulst = strcmp(input,lollipop))==0)
        {
            sum+=lollipopPrice*count;
        } 
        
        //else
        //{
        //    printf("Wrong item!\n");
        //}
        
        
        
        printf("What would you want?\n"); 
        scanf("%s",input); 
    }
    
        
    printf("Your total is: %.2f",sum);
}