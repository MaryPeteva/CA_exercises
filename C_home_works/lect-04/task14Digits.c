#include<stdio.h>
int main()
{
    //read a num and find how many digits it has in do-while
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int count=0;
    do
    {
        num/=10;
        count++;
    } while (num>0);

    printf("%d\n",count);
    
    return 0;
}