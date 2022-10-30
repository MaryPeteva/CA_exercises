#include<stdio.h>
int main()
{
    //read an aray and a num to search in it
    //count how many times the num is in it
    int size = 0;
    printf("Enter a array size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter a num to search for:");
    int searchedNum = 0;
    int count = 0;
    scanf("%d",&searchedNum);
    printf("Enter random numbers:");
    for (int i = 0; i < size; i++)
    {
        int n = 0;
        scanf("%d",&n);
        arr[i] = n;
    }

    for (int j = 0; j < size; j++)
    {
        
        if(arr[j]==searchedNum)
        {
            count++;
        }
    }

    printf("The num %d is %d times in the array",searchedNum,count);
}