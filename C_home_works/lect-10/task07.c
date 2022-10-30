#include<stdio.h>
#include<string.h>
void trimArr(char strArr[])
{
    int  i,j;
 
	for(i = 0;strArr[i] == ' '|| strArr[i] == '\t'; i++);
	{
        for(j = 0;strArr[i];i++)
        {
            strArr[j++] = strArr[i];
        }
        strArr[j] = '\0';
        for(i = 0;strArr[i] != '\0';i++)
        {
            if(strArr[i] != ' '&& strArr[i] != '\t')
            {
                j = i;
            }
        }
    }	
	
	strArr[j+1]='\0';
    printf("After trim: '%s'\n", strArr);
}
int main()
{

    //trim all the leading and tailing white space chars
    char strArr[100];
    gets(strArr);
    printf("Before trim: '%s'\n", strArr);
    trimArr(strArr);
}