#include<stdio.h>
#include<string.h>
int main()
{
    //read a text until EOF and if there are more than one space replace them with just one
    char c;

    while ((c = getchar()) != EOF)
    {

       if(c==' ')
       {
           putchar(c);
           while ((c=getchar())==' ');         
       }
        putchar(c);
    }
    
    return 0;
}