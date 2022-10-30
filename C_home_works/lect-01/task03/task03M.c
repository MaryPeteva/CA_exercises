/*One Jupiter year (the time it takes for Jupiter to
make one complete revolution of the Sun) has a duration of 12 Earths
years. Write a program that converts user input
earth days in Jupiter years.*/
#include"task03H.h"

int main()
{
    int iDaysOnEarth = readNums(iDaysOnEarth);    
    float fJupiterYears = calculateJupiterYears(iDaysOnEarth);

    printf("%d days on Earth are %.2f years on Jupiter\n", iDaysOnEarth, fJupiterYears); 

    return 0;
}