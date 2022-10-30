#include<stdio.h>

int main()
{
    //read six digit num 
    //select index 1.3.5.6 concat in a year
    //is the year leap
    //if year%4 && year%400==0 it's leap if year%100!=0 not
    int num;
    scanf("%d",&num);
    int year,k;
    int rnd = 1000000;
    for (int i = 1; i <= 6; i++)
    {
        k = num/rnd;
        printf("K:%d",k);
        num =num - (k*rnd);
        if(i=1)
        {
            year+=k*1000;
        }

        if(i=3)
        {
            year+=k*100;
        }

        if(i=5)
        {
            year+=k*10;
        }

        if(i=6)
        {
            year+=k;
        }
        
        rnd /= 10;  
        printf("Num:%d\nK:%d\n",num,k);
    }
    
}