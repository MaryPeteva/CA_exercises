#include<stdio.h>
int main()
{
    int num = 2;
    int arr[50];
    arr[0] = 2;
    for (int i = 1; i <= 46; i+=2)
    {
        arr[i+1] = arr[i]+1;
        arr[i+2] = arr[i]*2+1;
        arr[i+3] = arr[i]+2;
        
    }
    
    for (int i = 0; i < 50; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}