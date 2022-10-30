/*Task 3. Write a program that calculates the difference of
two periods of time expressed in centuries, years, months, days,
minutes, seconds. Print the output periods and the result.*/
/*
1 Time period will be struct: century,year,month,day,minute,seconds
2 Read the two periods
3 Compare both member by member
*/
#include<stdio.h>
#include<stdlib.h>
struct TimePeriod
{
    int iCentury;
    int iYears;
    int iMonths;
    int iDays;
    int iMinutes;
    int iSeconds;

};
void calculateDiff(struct TimePeriod*, struct TimePeriod*, struct TimePeriod*);
void readPeriod(struct TimePeriod *pntr);
int main()
{
    /*deff two time periond and one for the difference*/
    struct TimePeriod firstPeriod, secondPeriod, differencePeriod;
    struct TimePeriod* pntrFirst = &firstPeriod;
    struct TimePeriod* pntrSecond = &secondPeriod;
    struct TimePeriod* pntrDiff = &differencePeriod;
   
    readPeriod(pntrFirst);
    readPeriod(pntrSecond);
    calculateDiff(pntrFirst, pntrSecond, pntrDiff);
    printf("The difference is: %d centuries, %d years, %d months, %d days, %d minutes, %d seconds", pntrDiff->iCentury, pntrDiff->iYears, pntrDiff->iMonths, pntrDiff->iDays, pntrDiff->iMinutes, pntrDiff->iSeconds);
}
void readPeriod(struct TimePeriod *pntrPeriod)
{
    /* scan input */
    printf("Enter your first time period: century, years, months, days, minutes, second\n");
    scanf("%d %d %d %d %d %d", &pntrPeriod->iCentury, &pntrPeriod->iYears, &pntrPeriod->iMonths, &pntrPeriod->iDays, &pntrPeriod->iMinutes, &pntrPeriod->iSeconds);

}

void calculateDiff(struct TimePeriod* pntrFirst, struct TimePeriod* pntrSecond, struct TimePeriod* pntrDiff)
{
    /* initialize hours because there isn't hours in the input but from minutes we can make difference in days */
    int hours = 0;

    if(pntrFirst->iSeconds >= pntrSecond->iSeconds)
    {/* always check wich one is bigger to avoid negative result */
        pntrDiff->iSeconds = pntrFirst->iSeconds - pntrSecond->iSeconds;
    }
    else
    {
        pntrDiff->iSeconds =  pntrSecond->iSeconds - pntrFirst->iSeconds;
    }

    if(pntrDiff->iSeconds > 60)
    {
        pntrDiff->iSeconds -= 60;
        pntrDiff->iMinutes++;
    }

    if(pntrFirst->iMinutes >= pntrSecond->iMinutes)
    {
        pntrDiff->iMinutes = pntrFirst->iMinutes - pntrSecond->iMinutes;
    }
    else
    {
        pntrDiff->iMinutes = pntrSecond->iMinutes - pntrFirst->iMinutes;
    }

    if(pntrDiff->iMinutes > 60)
    {
        pntrDiff->iMinutes -= 60;
        hours++;
        if(hours>24)
        {
            hours -= 24;
            pntrDiff->iDays++;
        }
    }

    if(pntrFirst->iDays >= pntrSecond->iDays)
    {
        pntrDiff->iDays = pntrFirst->iDays - pntrSecond->iDays;
    }
    else
    {
        pntrDiff->iDays =  pntrSecond->iDays - pntrFirst->iDays;
    }

    if(pntrDiff->iDays > 30)
    {
        pntrDiff->iDays -= 30;
        pntrDiff->iMonths++;
    }

    if(pntrFirst->iMonths >= pntrSecond->iMonths)
    {
        pntrDiff->iMonths = pntrFirst->iMonths - pntrSecond->iMonths;
    }
    else
    {
        pntrDiff->iMonths =  pntrSecond->iMonths - pntrFirst->iMonths;
    }

    if(pntrDiff->iMonths>12)
    {
        pntrDiff->iMonths -= 12;
        pntrDiff->iYears++;
    }

    if(pntrFirst->iYears >= pntrSecond->iYears)
    {
        pntrDiff->iYears = pntrFirst->iYears - pntrSecond->iYears;
    }
    else
    {
        pntrDiff->iYears =  pntrSecond->iYears - pntrFirst->iYears;
    }

    if(pntrDiff->iYears > 100)
    {
        pntrDiff->iYears -= 100;
        pntrDiff->iCentury++;
    }

      if(pntrFirst->iCentury >= pntrSecond->iCentury)
    {
        pntrDiff->iCentury = pntrFirst->iCentury - pntrSecond->iCentury;
    }
    else
    {
        pntrDiff->iCentury =  pntrSecond->iCentury - pntrFirst->iCentury;
    }
}
