#include<stdio.h>
#define AVG(x,y)({\
float sum = 0.0;\
float result = 0.0;\
for (int i = x; i <= y; i++)\
{\
    sum += i;\
}\
result = sum/(y-x+1);})

int main()
{
    float res = AVG(10,  20);
    printf("%f", res);
}