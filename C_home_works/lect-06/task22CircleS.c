#include<stdio.h>
#include<math.h>

float circleR(float);
int main()
{
    //read radius 'r'
    //find the area of circle
    float r;
    printf("Enter radius:");
    scanf("%f",&r);
    circleR(r);
    printf("The area of the circle is %.2f",circleR(r));
}
float circleR(float r)
{
    float s = pow(r,2)*M_PI;
    return s;
}