#include<stdio.h>
float runDistanceFor10Days(float startingDist,float percentAddedDist)
{//calculate the distance run for 10 days.
    float distFor10Days =0.0;
    float daily = startingDist+((startingDist/100)*percentAddedDist);
    for (int i = 0; i < 10; i++)
    {

        distFor10Days += startingDist;
        startingDist = daily;
    }
    
    return distFor10Days;
}

float runDistanceForNDays(float startingDist,float percentAddedDist,int days)
{
    //calculate the distance run for n days.
    float distForNDays =0.0;
    float daily = startingDist+((startingDist/100)*percentAddedDist);
    for (int i = 0; i < days; i++)
    {
        distForNDays += startingDist;
        startingDist = daily;
    }
    
    return distForNDays;
}

int dailyTarget(float startingDist,float percentAddedDist,float targetDistForDay)
{
    int count=0;
    float daily = startingDist;
    do
    {
        count++;
        daily = startingDist+((startingDist/100)*percentAddedDist);
        startingDist = daily;
    } while (daily <= targetDistForDay);
    
    return count;
}

int totalDistanceRunn(float startingDist,float percentAddedDist,float totalTargetDist)
{
    int count=0;
    float daily = startingDist;
    float totalD = 0.0;
    do
    {
        count++;
        totalD+=daily;
        daily = startingDist+((startingDist/100)*percentAddedDist);
    } while (totalD <= totalTargetDist);
    
    return count;
}

int main()
{
    //runner started running with 'a' distance
    //each following day adding 'b'% of 'a' distance to the  distance runned last day
    //how much he will run for 10 days
    //how much he will run for 'n' days(read 'n'in input)
    //when will he run more than 'x' distance/which day(read 'x in input')
    //when he will totally run 'y'distance(read 'y in input')

    float startingDist,percentAddedDist,targetDistForDay,totalTargetDist;
    int days;
    printf("Whats the distance you'll start with?");
    scanf("%f",&startingDist);
    printf("What percent from it you'll add up to your next run?");
    scanf("%f",&percentAddedDist);
    printf("How many days you want to track?");
    scanf("%d",&days);
    printf("What is the daily goal?");
    scanf("%f",&targetDistForDay);
    printf("What is your overall goal distance?");
    scanf("%f",&totalTargetDist);
    float tenDays = runDistanceFor10Days(startingDist,percentAddedDist);
    printf("For 10 days you will run %.2f km!\n",tenDays);
    float nDays = runDistanceForNDays(startingDist,percentAddedDist,days);
    printf("For %d days you will run %.2f km!\n",days,nDays);
    int dailyGoal = dailyTarget(startingDist,percentAddedDist,targetDistForDay);
    printf("You will run %.2f km on the %dth day,for the day!\n",targetDistForDay,dailyGoal);
    int totalDays = totalDistanceRunn(startingDist,percentAddedDist,totalTargetDist);
    printf("You will run total of %.2f km on the %dth day!\n",totalTargetDist,totalDays);

}