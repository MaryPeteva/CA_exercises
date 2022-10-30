#include "task08H.h"

void fillTime(int *time)
{
    printf("Hours/Minutes/Seconds\n");

    for (size_t i = 0; i < 3; i++)
    {
        scanf("%d", &time[i]);   
    }
    
}

void convertTime(int *time)
{
    char ampm = '2';
    printf("AM - 1 / PM - 2\n");

    scanf(" %c", &ampm);

    if (ampm == '1')
    {
        time[0] += 12;
        if (time[0] >= 24)
        {
            time[0] = 0;
        }   
    }
}

void display(int *time)
{
    for (size_t i = 0; i < 3; i++)
    {
        if (time[i]<9)
        {
            printf("0");
        }
        
        printf("%d:", time[i]);
    }
}