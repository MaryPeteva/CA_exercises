#include<stdio.h>
int numPrint();
int main()
{
    //recursive function to print the numbers 0-100;
    int i=0;
    numPrint(i);
}

int numPrint(int i)
{
    if(i<=100)
    {
        printf("%d\n",i);
        i++;
        numPrint(i);
    }
}