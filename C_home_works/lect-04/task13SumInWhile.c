#include<stdio.h>
int main()
{
    //get two nums and sum up the numbers between them(the numbers included)
    int start,end;
    printf("Enter two numbers:");
    scanf("%d %d",&start,&end);
    int temp=start+1;
    while (temp<=end)
    {
        start+=temp;
        temp++;
    }
    
    printf("%d\n",start);

    return 0;
}