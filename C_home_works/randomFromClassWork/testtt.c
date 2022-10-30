#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num = 0;
    int arr[50];
    scanf("%d", &num);
    arr[0] = num;
    int j = 0;

    for (int i = 1; i <= 50; i+=3)
    {
        arr[j] = (arr[i]+1);
        arr[++j] = (2*arr[i]+1);
        arr[++j] = (arr[i] + 2);
    }

    for (int k = 0; k < 50; k++)
    {
        printf("%d\n", arr[k]);
    }
    
    
}