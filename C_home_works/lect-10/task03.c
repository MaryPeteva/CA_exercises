#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void readArr(char strOne[], char strTwo[])
{
    scanf("%s", strOne);
    scanf("%s", strTwo);
}
void compareArr(char strOne[], char strTwo[])
{
    int lenOne = strlen(strOne);
    int lenTwo = strlen(strTwo);
    bool isSame = true;
    int i = 0;
   
    if(lenOne == lenTwo)
    {
        for ( i = 0; i <= lenOne; i++)
        {
            if(strOne[i] != strTwo[i])
            {
                isSame = false;
                break;
            }
            else
            {
                isSame = true;
            }
        }
    }
    else
    {
        isSame = false;
    }

    if(!isSame)
    {
        printf("The two strings are not identical");
    }
    else
    {
        printf("The two strings are identical");
    }
}
int main()
{
    //compare two strings without using strcmp()
    char strOne[100];
    char strTwo[100];
    readArr(strOne, strTwo);
    compareArr(strOne, strTwo);
}