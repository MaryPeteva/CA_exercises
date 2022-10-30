#include<stdio.h>
#include<stdlib.h>
void add(float a, float b)
{
    printf("%.2f\n", (a + b));
}
void substract(float a, float b)
{
    printf("%.2f\n", (a - b));
}
void multyply(float a, float b)
{
    printf("%.2f\n", (a * b));
}
void divide(float a, float b)
{
    printf("%.2f\n", (a / b));
}
int (*pntr[4]) (float x, float y);
int main()
{
    //make a pointer array to store math functions +,-,*,/
    //ask the user to choose
    //ask for two number as well
    pntr[0] = add; //warning why?????
    pntr[1] = substract;
    pntr[2] = multyply; 
    pntr[3] = divide;
    float a = 0;
    float b = 0;
    float result = 0;   
    printf("What to do with the numbers:\n for add '+'\nfor substract '-'\nfor multiply '*'\nfor divide '/'\n");
    char ch;
    scanf("%c", &ch);
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);

    switch (ch)
    {
        case'+':
            result = ( *pntr[0])(a, b);
        break;
        case'-':
           result = ( *pntr[1])(a, b);
        break;
        case'*':
            result = ( *pntr[2])(a, b);
        break;
        case'/':
           result = ( *pntr[3])(a, b);
        break;
 
    }
}