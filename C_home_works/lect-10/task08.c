#include<stdio.h>
#include<string.h>
//bruhhhhhh
void trimWhiteSpace(char strArr[])
{
    int len = strlen(strArr);
	char* d = strArr;

    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*strArr++ = *d++);    
    
    printf("'%s'\n", strArr);
}
int main()
{
    char strArr[100];
    //input string from user
    fgets(strArr, 100, stdin);
    trimWhiteSpace(strArr);
}