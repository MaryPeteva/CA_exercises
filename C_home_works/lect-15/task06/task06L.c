#include"task06H.h"

int maxSum( int *arr)
{
    int min;
    int maxSum = 0;
    min = arr[0];
    for(size_t i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        } 
    }

    for(size_t i = 0; i < 5; i++)
    {
        maxSum +=arr[i]; 
    }
 
    return (maxSum - min);
}
 
 
int minSum(int *arr)
{
    int max;
    int minSum = 0;
    max = arr[0];
    for(size_t i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        } 
    }

    for(size_t i = 0; i < 5; i++)
    {
         minSum += arr[i];  
    }
 
    return (minSum -max);
}
 