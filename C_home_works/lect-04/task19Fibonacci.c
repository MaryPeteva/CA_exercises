#include<stdio.h>
int main()
{
    //read a num n and print the n-th digit from Fibonacci sequense
    int n,tmp;
    printf("Enter a number:");
    scanf("%d",&n);
    int firstTerm = 1;
    int secondTerm = 1;
    for (int i = 3; i < n-1; i++)
    {
        tmp = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = tmp;
        tmp = firstTerm+secondTerm;
        
    }
    printf("%d\n",tmp);
    return 0;
}
