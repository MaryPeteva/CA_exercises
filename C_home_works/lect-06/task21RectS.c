#include<stdio.h>
float areaRect(float,float);
int main()
{
    //calculate in a different function the area of rectangle
    //read sides 'a' and 'b'
    float a,b;
    printf("Enter the sides:");
    scanf("%f %f",&a,&b);
    areaRect(a,b);
    printf("The area of the rectangle is %.2f",areaRect(a,b));
}
float areaRect(float a,float b)
{
    float sum = a*b;

    return sum;
}