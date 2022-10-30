#include<stdio.h>
int main()
{//-----------------------domisli-------------------------
    //read:
    // the sum of money put in the acc;
    //the monthly interest rate
    //until the sum gets bigger than "max"???
    double money,interestRate,maxSum;
    printf("How much money you want to put in?");
    scanf("%lf",&money);
    printf("What interest rate?");
    scanf("%lf",&interestRate);
    printf("What is the maximum sum you want?");
    scanf("%lf",&maxSum);
    double rate = (money/100)*interestRate; //for a month
    //if the sum is the same and only add up the rate
    double tmpSum = money+(12*rate);//sum for one year
    double years = maxSum/tmpSum;
    printf("You will get to %.2lf for %.1lf years",maxSum,years);
    return 0;


}