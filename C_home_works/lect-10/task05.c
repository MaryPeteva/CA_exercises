#include<stdio.h>
#include<string.h>
void countArr(char strArr[])
{
    int len = strlen(strArr);
    int i = 0;
    int j = 0;
    int count = 0;
    char ch;
    int  maxCount = 0;
    char maxCh;
    for( i = 0; i < len; i++)
    {
        ch = strArr[i];

        for( j = 0; j < len; j++)
        {
            if(ch == strArr[j])
            {
                count++;
            }
        }
        
        if(maxCount < count)
        {
            maxCount = count;
            maxCh = ch;
        }

        count = 0;
    }

    printf("Max char is : %c\n Count: %d\n",maxCh, maxCount);
}
int main()
{//pfff
    //find the most repeated char in a string
    char strArr[100];
    scanf("%s", strArr);
    countArr(strArr);
    
}