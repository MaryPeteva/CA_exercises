#include<stdio.h>
#include<string.h>
void concat(char strOne[], char strTwo[])
{
    int lenOne = strlen(strOne);
    int lenTwo = strlen(strTwo);
    int lengh =  lenOne + lenTwo;
    char strThree[lengh];
    int j = 0;
    for (int i = 0; i <= lengh; i++)
    {
        if(i <= lenOne)
        {
            strThree[i] = strOne[i];
        }
        else
        {
            strThree[i] = strTwo[j];
            j++;
        }

    }
    //printf("%s", strThree); не ми принтира целия стринг само първата част
    //но цикъла копира и двете като го проверих през дебъгера
    for (int k = 0; k <= lengh; k++)
    {
        printf("%c", strThree[k]);
    }
    printf("\n");
}
int main()
{
    //concatenate two strings without using strcat()
    char strOne[] = "We are all";
    char strTwo[] = " mad here, Alice";
    concat(strOne,strTwo);
}