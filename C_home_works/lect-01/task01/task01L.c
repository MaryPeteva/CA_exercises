#include"task01H.h"

float readWeight(float fWeightOnEarth)
{
    printf("Enter weight on earth to calculate:\n");
    scanf("%f",&fWeightOnEarth);

    return fWeightOnEarth;
}

float calculateWeightOnMoon(float fWeight)
{
    return (fWeight/9.81)*1.622;
}