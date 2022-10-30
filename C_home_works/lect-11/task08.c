/* 
Write a macro with one parameter that prints
message, only when a DEBUG macro is defined. If DEBUG
is not defined, prints nothing*/
#include<stdio.h>
#include<string.h>
#define DEBUG 
#ifdef DEBUG
    #define PRINT {printf("Debug enabled\n");}
#endif
int main()
{
    

    return 0;
}