#include<stdio.h>
int main()
{
    //arithmetic progression
    //read the first digit from the progression 'a'
    //read the step of the progression 'b'
    //print the 'n'(read firts ofc) digits
    int a,b,n;
    printf("Enter your first digit and step:");
    scanf("%d %d",&a,&b);
    printf("How many digits want to show?");
    scanf("%d",&n);
    for (int i = a; i <= n; i+=b)
    {
        printf("%d\n",i);
    }
    return 0;
}
