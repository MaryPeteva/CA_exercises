#include<stdio.h>
#include<math.h>
int main()
{
    //using Gottfried Leibniz formula calculate the number π to the 6th digit
    double tmpSum = 0.0;
    double sum=0.0;
    double pi = 0.0;
        for (int i = 0; i <= 6; i++)
    {
        tmpSum = pow(-1, i) / (2 * i + 1);
        sum += tmpSum;
    }
    pi = 4 * sum;
 
    printf("π = %.6lf\n", pi);
 
}