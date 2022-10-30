#include "task02H.h"

void fillArr(int* array,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &array[i]);
    }
    
}

int equalDevider(int num1, int num2)
{
    int count = 0;
    if (num1 >= num2)
    {
        count = num1;
    }
    else
    {
        count = num2;
    }
    
    int devider = 0;
    for (size_t i = 1; i < count; i++)
    { 
        if (num1 % i == 0 && num2 % i == 0)
        {
            devider = i;
        }  
    }
    
    return devider;
}

int greatestDevider(int *array, int size)
{
    int tmpDevider = equalDevider(array[0], array[1]);

    for (size_t i = 2; i < size; i++)
    {
        int devider = equalDevider(tmpDevider, array[i]);
        tmpDevider = devider;
    }
    
    printf("array devider: %d\n", tmpDevider);
    
    return 1;
}

bool checkSimpleNum(int num)
{
    int flag = 0;
    for (size_t i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            flag++;
        } 

        if (flag > 2)
        {
            return false;
        }
    }

    return true;
}

