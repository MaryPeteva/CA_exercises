#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void checkCharsForDuplicats(char strArr[], char duplArr[])
{
    int len = strlen(strArr);
    int i = 0;
    int j = 0;
    for ( i = 0; i < len; i++)
    {
      
        if(strArr[i] != strArr[i+1])
        {

            duplArr[j] = strArr[i];
            j++;

        }
        else if(strArr[i] == strArr[i+1])
        {
            i++;
        }
    }

    printf("%s\n", duplArr);
    
}
int main()
{
    //remove all duplicate chars in a string
    char strArr[100];
    scanf("%s", strArr);
    char duplArr[100];
    checkCharsForDuplicats(strArr, duplArr);
}