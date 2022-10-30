#include<stdio.h>
int main()
{
    //rean a num 1-12 for a month and print how many days a month has

    printf("Enter a number of a month:\n");
    short int num;
    scanf("%hu",&num);

    switch (num)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
     printf("The month has 31 days.\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
     printf("The month has 30 days.\n");
        break;
        case 2:
        printf("If it's a leap year the monthe has 29 days,if it's not it has 28 days.\n");
        break;    
        default:
        printf("Wrong input!\n");
        break;
    }

    return 0;
}