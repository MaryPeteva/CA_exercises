/*Moon gravity 17% of Earts gravity
earth's force of gravity is 9.81m/s2
formula is Weight on the Moon= (Weight on Earth/9.81m/s2) * 1.622m/s2*/
#include "task01H.h"

int main()
{
    float fWeightOnEarth = readWeight(fWeightOnEarth);
    float fWeightOnMoon = 0.0;
    fWeightOnMoon = calculateWeightOnMoon(fWeightOnEarth);
    printf("The weight %.2f kg on Earth will be %.2f kg on the Moon", fWeightOnEarth, fWeightOnMoon);

    return 0;
}
