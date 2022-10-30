#include<stdio.h>
#include<string.h>
void fillArr(char strOne[])
{
    
    scanf("%s", strOne);

}
void arrRevv(char strOne[], char strTwo[])
{
    //strTwo = strrev(strOne); защо strrev не работи правилно на линукс?!? me needs answers!
    int len = strlen(strOne);
    for (int i = 0; i < len; i++)
    {
        strTwo[i] = strOne[len];
        len--;
    }
    
}
void compareArr(char strOne[], char strTwo[])
{
    if(strcmp(strOne, strTwo) == 0)
    {
        printf("The strings are identical");
    }
    else
    {
        printf("The strings are not identical");
    }
}
int main()
{
    //check if a string is a palindrome without loop
    char strOne[100];
    char strTwo[100];
    fillArr(strOne);
    arrRevv(strOne, strTwo);
    compareArr(strOne, strTwo);

}