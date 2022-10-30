/*
Task 1. Write a union of three values: an integer, a number with
floating point and string. Initialize the individual members and output them
on the screen*/
#include<stdio.h>
#include<string.h>
typedef union Data 
{
   int iNum;
   float fNum;
   char str[20];
} data; 

int main()
{
    union  Data rndData;

    rndData.iNum = 10;
    rndData.fNum = 101.1;
    strcpy(rndData.str,"Code Academy");
    
   printf("Integer: %d\n", rndData.iNum);
   printf("Float: %d\n", rndData.fNum);
   printf("String: %s\n", rndData.str);
    
}