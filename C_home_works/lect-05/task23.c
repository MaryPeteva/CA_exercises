#include<stdio.h>
int main()
{
    //read a numbers in the range [1-50]
    //read until identical num follow
    //print the count of numbers that have been read and theirs sum
    int num,tmp,count=0;
    float sum=0.0;
    do
    {
       scanf("%d",&num);
       count++;
       sum+=num;
       if(num==tmp)
       {
           sum/=count;
           printf("count: %d average value: %f",count,sum);
           break;
       }
        tmp=num;
    } while (num >= 1 && num <= 50);
    
    return 0;
}