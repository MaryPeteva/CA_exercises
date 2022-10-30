#include<stdio.h>
int main()
{
    //read two nums for start and end
    //check if a num is divisible by 7 if it add to sum
    printf("Enter two numbers:");
    int a,b;
    scanf("%d %d",&a,&b);
    int sum =0;
    for (int i = a; i <= b; i++)
    {
        if(i%7==0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}