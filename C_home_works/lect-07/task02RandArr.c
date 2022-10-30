#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
int main()
{
    //make a arr[20] fill it with random nums use 'rand()' func
    //read a num and check if it's in the array
    //print the array and is the num in it
    int num = 0;
    printf("Enter a number to search:");
    scanf("%d",&num);

    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand()%10;
        //arr[i] = rand();
    }

    printf("Elements in the array:");
    for (int j = 0; j < 20; j++)
    {
        printf(" %d ",arr[j]);
    }

    bool isTheNumThere = false;
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == num)
        {
            isTheNumThere = true;
        }
    }
    if (isTheNumThere)
    {
        printf("\nThe number %d is in the array\n",num);
    }
    else
    {
        printf("\nThe number %d is not in the array\n",num);
    }
     
}