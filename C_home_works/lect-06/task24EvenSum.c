#include<stdio.h>
int evenSum(int,int);
int main()
{
    //read start and end of interval
    //get the sum of the even nums and print it
    printf("Enter start and end for the interval:");
    int start,end,tmp;
    scanf("%d %d",&start,&end);
    if (end<start)
    {
        tmp=start;
        start = end;
        end = tmp;
    }

    //int evenSum(int start,int end);
    printf("%d\n",evenSum(start,end));
}

int evenSum(int start,int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
    }

    return sum;
}