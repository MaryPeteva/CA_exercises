#include<stdio.h>
void countArr(char strArr[100], int count)
{
    char ch;
    int i = 0;
    do
    {
        strArr[i] = ch;
        count++;
        i++;

    } while (strArr[i]!= '\0');
    
    printf("%d\n", count);
}
int main()
{
    //find the lenght of a string without using function strlen(),use loop
    char strArr[100];
    int count = 0;    
    scanf("%s", strArr);
    countArr(strArr,count);    
    
}