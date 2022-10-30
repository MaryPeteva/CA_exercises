#include"task03H.h"

int readNums(int iDaysOnEarth)
{
    printf("Enter days:\n");
    scanf("%d",&iDaysOnEarth);

    return iDaysOnEarth;
}

float calculateJupiterYears(int iDays)
{
    float fEarthsYears = iDays/EARTH_YEAR;
    float fJupitersYears = fEarthsYears/JUPITER_YEAR;

    return fJupitersYears;
}