#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    //read a number for player one and then untill guessed right read a number for player two
    //if player two guesses right a digit but not his index its a cow+1
    //if player two guesses right a digit and its index its bull+1
    char arrOne[4],arrTwo[4];
    printf("Player one enter your 4 digit number:");
    scanf("%s",arrOne);
    bool isTheNum = false;
    int bull = 0;
    int cow = 0;
    do
    {
        printf("Player two enter your 4 digit number:");
        scanf("%s",arrTwo);

        for (int i = 0; i < sizeof(arrOne); i++)
        {
            if(arrOne[i]==arrTwo[i])
            {
                bull++;
            }
        }
        if(bull==4)
        {
            isTheNum=true;
        }
        else
        {
            for (int i = 0; i < sizeof(arrOne); i++)
            {
                for (int j = 0; j < sizeof(arrOne); j++)
                {
                    if(arrOne[i]==arrTwo[j])
                    {
                        cow++;
                    }
                }
                
            }
            
        }
        printf("Bulls:%d\nCows:%d\n",bull,cow);
        bull=0;
        cow=0;
    } while (!isTheNum);
    if(isTheNum)
    {
        printf("Congratulations player two won!");
    }
}