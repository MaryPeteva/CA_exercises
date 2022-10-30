#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define MAX_SIZE 100
char *strToLower(char  *strArr,char *wordToSearch)
{
    int i = 0;
    for ( i = 0; i < strlen(strArr); i++)
    {
        strArr[i] = tolower(strArr[i]);
    }

    for ( i = 0; i < strlen(wordToSearch); i++)
    {
        wordToSearch[i] = tolower(wordToSearch[i]);
    }

    return strArr;
    return wordToSearch;
    
}
void strRemove(char *strArr, char *wordToSearch) 
{
    
    size_t len = strlen(wordToSearch);
    if (len > 0)
    {
        char *p = strArr;
        while ((p = strstr(p, wordToSearch)) != NULL) 
        {
            memmove(p, p + len, strlen(p + len) + 1);
        }
    }
    
    printf("%s\n", strArr);
}
int main()
{
    //find a word and remove it from a string
    char strArr[MAX_SIZE];
    char wordToSearch[MAX_SIZE];
    int count;

    //input string and word from user
    printf("Enter any string: \n");
    gets(strArr);
    printf("Enter word to search: \n");
    gets(wordToSearch);
    //convert evrything to lower case to not skip somthing!!!!
    strToLower(strArr, wordToSearch);
    //search and remove the word
    strRemove(strArr, wordToSearch);
    return 0;
}