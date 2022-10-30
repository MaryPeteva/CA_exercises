#include<stdio.h>
int main()
{
    //read a six digit number
    //the sum of the odd digits is "b" the sum of even digits is "a"
    // rectArea = a*b

    int num,a,b,k,s;
    int rnd = 100000;
    scanf("%d",&num);
    for (int i = 0; i < 6; i++)
    {
        k = num/rnd;
        if(k%2==0)
        {
            a+=k;
        }
        else
        {
            b+=k;
        }

        num = num -(k*rnd);
        rnd /=10;
        
    }
    
    s=a*b;
    printf("The area of rectangle is: %d\n",s);
}