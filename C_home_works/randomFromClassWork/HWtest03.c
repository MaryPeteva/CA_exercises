#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define ARR_SIZE 100

char* removeNumbers(char *);
bool isDigit(char*);

int main(void)
{
    char inText[] = "123 Mickey 456";
    printf("The result is %s\n", removeNumbers(inText));
    
}
bool isDigit(char* ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return true;
    }
    else
    {
        return false;
    }
}

char* removeNumbers(char* input)
{
    char* dest = input;
    char* src = input;

    while(*src)
    {
        if (isDigit(*src)) { src++; continue; }
        *dest++ = *src++;
    }
    *dest = '\0';
    return input;
}
