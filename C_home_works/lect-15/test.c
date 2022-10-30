#include<stdio.h>
#include<stdlib.h>
#define ARR_SIZE 100

char * swapCh(char *strArr);

int main ()
{
    char *strArr = malloc(ARR_SIZE);
    scanf("%s", strArr);

    strArr = swapCh(strArr); 
    
    
}

char * swapCh(char *strArr)
{
    printf("Enter char to swap");
    char fir,sec;
    scanf(" %c", &fir);
    printf("Enter a char to be swaped with");
    scanf(" %c", &sec);

    for (int i = 0; i < ARR_SIZE; i++)
    {
        if(strArr[i] == fir)
        {
            strArr[i] = sec;
        }
    }
    
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%c", strArr[i]);
    }
}
