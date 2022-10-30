#include<stdio.h>
int main() 
{
 //read a array 
 //copy the array in second one multiplying evry value by 2
 //print both arrays
 //free essay ask for the size of the array
 printf("Enter a size for the array:");
 int size = 0;
 scanf("%d",&size);
 int arrOne[size];
 //int *pOne = arrOne;
 int arrTwo[size];
 //int *pTwo = arrTwo;
    for (int i = 0; i < size; i++)
    {
        int n = 0;
        scanf("%d",&n);
        arrOne[i]=n;
        arrTwo[i]=n*2;
    }

        printf("First array: ");
    for (int j = 0; j < size; j++)
    {
        printf("%d ",arrOne[j]);
    }

    printf("\nSecond array:");
    for (int k = 0; k < size; k++)
    {
        printf("%d ",arrTwo[k]);
    }

 
}