#include<stdio.h>
#include<string.h>

int min();
int max();
int sum();
int num();

int main()
{
    char* input[3];
    scanf("%s", *input);
    int inpputNum[100];
    int key = 0;
    if(input[3] == 'p')
    {
        key = 1;
    }
    else if (input[3] == 'n')
    {
        key = 2;
    }
    else
    {
        key = 0;
    }
    
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &inpputNum[i]);
    }

    if(strcmp(input,"min"))
    {
        min(inpputNum);
    }
    else if (strcmp(input,"max"))
    {

    }
    else if (strcmp(input,"sum"))
    {
        
    }
    else if (strcmp(input,"num"))
    {
        
    }
    
    
    
    
}