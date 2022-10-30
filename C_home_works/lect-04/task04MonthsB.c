#include<stdio.h>
int main()
{
    //rean a num 1-12 for a month and print how many days a month has

    printf("Enter a number of a month:\n");
    short int num;
    scanf("%hu",&num);

    if(num==1||num==3||num==5||num==7||
    num==8||num==10||num==12)
    {
        printf("The month has 31 days.\n");
    }
    else if (num==4||num==6||num==9||num==11)
    {
        printf("The month has 30 days.\n");
    }
    else if (num==2)
    {
        printf("If it's a leap year the monthe has 29 days,if it's not it has 28 days.\n");
    }
    else
    {
        printf("Wrong input!\n");
    }
    
    return 0;
}