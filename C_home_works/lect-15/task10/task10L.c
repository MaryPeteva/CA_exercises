#include "task10H.h"

void fillCard(int *visa)
{
    printf("Enter 16 digits :\n");
    for (int i = 15; i >= 0; i--)
    {
        scanf("%d", &visa[i]);
    }   
}

bool checkValidCard(int *visa)
{
    int result = 0;
    int num = 0;

    for (size_t i = 0; i < 16; i++)
    {
        num = visa[i];
        if (i % 2 != 0)
        {
            //visa[i] *= 2;
            num = visa[i] * 2;
        }

        if (num > 9)
        {
            result += splitNumbers(num);
        }
        else
        {
            result += num;
        }
    }

    if (result % 10 == 0)
    {
        return true;
    }
    
    return false;
}

int splitNumbers(int num)
{
    int result = 0;

    result = num % 10;
    num /= 10;
    result += num;

    return result;
}

int isVisaOrMasterCard(int *visa)
{
    if (visa[15] == 4)
    {
        return 0;
    }
    else
    {
        int num = visa[15];
        num *= 10;
        num += visa[14];

        if (num >=51 && num <= 55)
        {
            return 1;
        }
    }
    return 3;
}