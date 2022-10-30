#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#define MAX_SIZE 100
//get total number of occurrences of a word in a string
int searchInArr(char * strArr, char * wordToSearch)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int stringLen, searchLen;
    bool isFound = false;
    stringLen = strlen(strArr);
    searchLen = strlen(wordToSearch);

    for(i=0; i <= stringLen-searchLen; i++)
    {
        // match word with string
        isFound = true;
        for(j=0; j<searchLen; j++)
        {
            if(strArr[i + j] != wordToSearch[j])
            {
                isFound = false;
                break;
            }
        }

        if(isFound)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    char strArr[MAX_SIZE];
    char wordToSearch[MAX_SIZE];
    int count;

    // input string and word from user
    printf("Enter any string: \n");
    gets(strArr);
    printf("Enter word to search occurrences: \n");
    gets(wordToSearch);

    count = searchInArr(strArr, wordToSearch);

    printf("Total occurrences of '%s': %d\n", wordToSearch, count);

    return 0;
}