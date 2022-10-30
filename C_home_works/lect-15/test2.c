#include<stdio.h>
#include<stdlib.h>

void* fillArr(int*arr,int start,int end);

int main()
{
    int arrSize = 0;
    printf("Enter a size for arr:\n");
    scanf("%d", &arrSize);
    int subArrSize = 0;
    printf("Enter a size for a sub array:\n");
    scanf("%d", &subArrSize);

    int arr[arrSize];
    int subarr[subArrSize];
    
    printf("Enter a starting number for array\n");
    int i = 0;
    scanf("%d", &i);
    int min = 0;

    fillArr(arr,i,arrSize);
    for ( i = 0; i < arrSize; i++)
    {
        printf("%d ",arr[i]);
    }
}

void* fillArr(int*arr,int start,int end)
{
    int i = 0;
    for ( i = start; i < end; i++)
    {
        arr[i] = i;
    }
    
}