#include"newH.h"

int main()
{
    int size = 5;
    int arr[] = { 12, 11, 13, 5, 6 };
    int *pntr = arr;
   
 
    insertionSort(pntr, size);
    printArray(pntr, size);
 
    return 0;
}