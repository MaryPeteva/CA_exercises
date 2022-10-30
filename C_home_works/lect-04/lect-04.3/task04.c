#include<stdio.h>
int main()
{
    //read two nums 'a' and 'b' divide them and print them with 'n' digits
     float a,b;
     int n;
     printf("Enter your numbers:");
     scanf("%f %f",&a,&b);
     printf("Enter desired digits to show:");
     scanf("%d",&n);
     float sum = a/b;
     printf("%.*f",n,sum);
}