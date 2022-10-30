#include<stdio.h>
int main()
{
    //read:
    // the sum of money put in the acc;
    //the monthly interest rate
    //max on monthly fee ?!?!? wt???
    double money,interestRate;
    int years;
    printf("How much money you want to put in?");
    scanf("%lf",&money);
    printf("What interest rate?");
    scanf("%lf",&interestRate);
    printf("How long you won't touch your account?");
    scanf("%d",&years);
    //if the amount of money is a monthly fee 
    double rate = (money/100)*interestRate; //for a month
    double tmpSum = (money+rate)*(years*12);

    printf("If you dont withdraw money from the account for %d you'll have %.2lf in the end of the %d years.\n",years,tmpSum,years);

}