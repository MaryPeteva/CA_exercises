/*HW Task 10.
Create a watermelon structure with two elements - diameter and rind thickness set aside
dynamically with malloc() for an array of A of number of melon variety watermelons and populate the data
for a diameter between 15 and 140 cm with the function rand(), for each watermelon in the array and
rind thickness between 0.5 and 3.5 cm. Create a watermelon structure with two elements -
shell diameter and thickness dynamically allocate with malloc() for an array of B in count
watermelons of the pumpkin variety and fill in the data for a diameter between 35 and 95 cm with
rand() function, for each watermelon in the array and a rind thickness between 0.3 and 0.9
see Find the average size of the watermelon and the average thickness of the rind and compare 
them to those in the second array. Display the pile of which variety is better to buy. 
Output: It is better to buy ... watermelons with a diameter of ... centimeters and a skin 
thickness of D cm instead of ... watermelons with a diameter of ... cm and a skin thickness 
of D1 cm.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct watherMellon
{
    double *diemeter;
    double *thickness;
} watherMellon;

double mellonDiameter(int);
double mellonThickness(int);
double pumkinDiameter(int);
double pumkinThickness(int);
void compare(double, double, double, double);
int main()
{
    printf("How many mellons will be in the pile?\n");
    int melonsCount = 0;
    scanf("%d", &melonsCount);
    double mellonDiam = mellonDiameter(melonsCount);
    double mellonThick = mellonThickness(melonsCount);
    double pumkinDiam = pumkinDiameter(melonsCount);
    double pumkinThick = pumkinThickness(melonsCount);

    compare(mellonDiam, mellonThick, pumkinDiam, pumkinThick);
}
double mellonDiameter(int melonsCount)
{
    watherMellon melon;
    melon.diemeter = malloc(sizeof(double) * melonsCount);

    for (int i = 0; i < melonsCount; i++)
    {
        melon.diemeter[i] = rand() % (140 - 15 + 1);
    }

    for (int i = 0; i < melonsCount; i++)
    {
        printf("%.0f\t", melon.diemeter[i]);
    }
    printf("\n");

    double avgDiameterMelon = 0.0;
    int diameterMelon = 0;
    for (int i = 0; i < melonsCount; i++)
    {
        diameterMelon += melon.diemeter[i];
    }

    avgDiameterMelon = (double)diameterMelon / melonsCount;
    
    return avgDiameterMelon;

}

double mellonThick(int melonsCount)
{
    watherMellon melon;
    melon.thickness = malloc(sizeof(double) * melonsCount);

    for (int i = 0; i < 10; i++)
    {
        melon.thickness[i] = ((double)rand()) / ((double)RAND_MAX) * (3.5 - 0.5) + 0.5;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf\t", melon.thickness[i]);
    }
    printf("\n");


    double avgThicknessMelon;
    double thickMelon;
    for (int i = 0; i < melonsCount; i++)
    {
        thickMelon += melon.thickness[i];
    }
    avgThicknessMelon = thickMelon / melonsCount;
    
    return avgThicknessMelon;

}

double pumkinDiameter(int melonsCount)
{
    watherMellon pumpkin;
    pumpkin.diemeter = malloc(sizeof(double) * melonsCount);

    for (int i = 0; i < melonsCount; i++)
    {
        pumpkin.diemeter[i] = rand() % (95 - 35 + 1);
    }

    for (int i = 0; i < melonsCount; i++)
    {
        printf("%.0f\t", pumpkin.diemeter[i]);
    }
    printf("\n");
    

    double avgDiameterPumpkin;
    int diameterPumpkin;
    for (int i = 0; i < melonsCount; i++)
    {
        diameterPumpkin += pumpkin.diemeter[i];
    }

    avgDiameterPumpkin = (double)diameterPumpkin / melonsCount;
    return avgDiameterPumpkin;
    
}

double pumkinThickness(int melonsCount)
{
    watherMellon pumpkin;
    pumpkin.thickness = malloc(sizeof(double) * melonsCount);

    for (int i = 0; i < 10; i++)
    {
        pumpkin.thickness[i] = ((double)rand()) / ((double)RAND_MAX) * (0.9 - 0.3) + 0.3;
    }

    for (int i = 0; i < melonsCount; i++)
    {
        printf("%.1lf\t", pumpkin.thickness[i]);
    }
    printf("\n");

    double avgThicknessPumpkin = 0;
    double thickPumpkin = 0;
    for (int i = 0; i < melonsCount; i++)
    {
        thickPumpkin += pumpkin.thickness[i];
    }
    avgThicknessPumpkin = thickPumpkin / 10;

    return avgThicknessPumpkin;
}

void compare(double mellonDiam,double mellonThick,double pumkinDiam,double pumkinThick)
{
    if ((mellonDiam > pumkinDiam) && (mellonThick < pumkinThick))
    {

        printf("Better buy Melons %.2lf diameter and %.2lf rind than Pumpkins %.2lf diameter and %.2lf rind ",mellonDiam, mellonThick, pumkinDiam, pumkinThick);

    }
    else if ((mellonDiam < pumkinDiam) && (mellonThick > pumkinThick))
    {

        printf("Better buy Pumpkins %.2lf diameter and %.2lf rind than Melons %.2lf diameter and %.2lf rind ",pumkinDiam, pumkinThick, mellonDiam, mellonThick);

    }
    else
    {
        
        printf("inconclusive data for comparison");

    }

    
}