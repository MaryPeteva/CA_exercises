/*
Task 2. Write a union of a number and a string, and an enumerable type for
the contents of the union. Write a function that gets
pointer to the union and enumerable type and outputs a string or respectively
number*/
#include<stdio.h>
#include<string.h>
typedef union Data 
{
   int iNum;
   char str[20];
} data; 

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    union  Data rndData;

    rndData.iNum = 10;
    strcpy(rndData.str,"Code Academy");
    enum week day;
    day = Wed;
    printf("Day: %d\n",day);
    printf("Integer: %d\n", rndData.iNum);
    printf("String: %s\n", rndData.str);
    return 0;
}