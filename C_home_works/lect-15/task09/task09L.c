#include"task09H.h"

bool is_zigZag(int *arr , int size)
{
    int a;
    if (arr[0] > arr[1])
    {
        a = 1;
    }else{
        a=2;
    }
 
    for (size_t i = 0; i < size - 1; i++)
    {
        switch (a)
        {
        case 1:
            if (arr[i] > arr[i+1])
            {
                a = 2; 
            }else{
                return false;
            }
 
            break;
 
        case 2:
 
            if (arr[i] < arr[i+1])
            {
                a = 1; 
            }else{
                return false;
            }
            break;
 
        default:
            printf ("Error");
            break;
        }
    }
   return true; 
}