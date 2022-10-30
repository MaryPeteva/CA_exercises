#include<stdio.h>
int main()
{
    //read a number,take the lats digit 
    //if its 5 print "it's divisible by 5"
    //if it's 0 print "it's not divisible by 5"
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int lastDigit = num%10;
    if(lastDigit==0||lastDigit==5)
    {
        printf("The number %d is divisible by 5\n",num);
    }
    else
    {
        printf("The number %d is not divisible by 5\n",num);
    }

    return 0;
}