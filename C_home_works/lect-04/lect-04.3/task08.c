#include<stdio.h>
int main()
{
    //read 'n' and calculate A(0)+A(1)+A(2)+...+A (N)(for loop)
    //if A(0)=1,A(К+1)=2.A(К)+1 for К>=1
    //print the progression of k
    int n;
    int k = 1;
    printf("Enter your desired number:");
    scanf("%d",&n);

    for (int a = 1; a <= n; a++)
    {
        printf("%d\n",k);
        k = k*2+1;
    }
    
}