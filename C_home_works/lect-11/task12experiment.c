/*  Write a program to remove all comments in
a C program.
1 read input
2 if input == /* read until */
/*3 else print out input */
#include<stdio.h>
#include<stdbool.h>
/*EOF diched me again none key biding works*/
void inputOusideComment(char firstCh, char secondCh)
{
    putchar(firstCh);
    putchar(secondCh);
}

void inputIsInComment(char firstCh, char secondCh)
{
    bool isEndOfComment = true;
    do
    {

        isEndOfComment = false;

    } while (((firstCh == getchar()) != '*') && ((secondCh == getchar() )!= '/') && (firstCh != EOF && secondCh != EOF));

    if(isEndOfComment)
    {
        inputOusideComment(firstCh, secondCh);
    }
}

void readInput(char firstCh, char secondCh)
{
    while ((firstCh == getchar()) != EOF)
    {

        if(firstCh == '/' && (secondCh == getchar()) == '*')
        {
           
           inputIsInComment(firstCh, secondCh); 
            
        }
        
    }
}
int main()
{
    char firstCh;
    char secondCh;
    printf("Enter your text:\n");

   readInput(firstCh, secondCh);
    
}