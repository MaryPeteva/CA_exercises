#include<stdio.h>
int main()
{
    //read num and multiply all odd digits < num
    int num;
    int sum=1;
    printf("Enter a number:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if(i%2!=0)
        {
            sum*=i;
        }
    }
    printf("%d",sum);

    return 0;
    
}