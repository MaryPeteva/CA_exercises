#include "task05H.h"

bool is_numMajar(int *arr, int number, int size)
{
    int count = 0;
    int mid = size/2 +1;
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            count++;
        }
    }
     return mid <= count ?  true :  false;
    
}
int majorNumber(int *arr, int size)
{
    int majorNumber = 0;
    int mid = 0;
    mid = size /2 +1;
    majorNumber = arr[mid];
    //{ 0 0 1 0 0 }
    //{ 0 0 1 1 0 0}
    return majorNumber;
}
void bubbleSort (int *array, int cols)
{
    for (int j = 0; j < cols-1; j++)
    {
        for (int i = 1; i < cols - j; i++)
        {
            int temp;
            if(array[i-1] < array[i])
            {
                temp = array[i];
                array[i] = array[i-1];
                array[i-1] = temp;   
            }
            
        }
    }
}
