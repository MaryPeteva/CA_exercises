 
/*  Задача 11*. Write a program to remove all comments in
a C program.
 */
 
#include <stdio.h>
void rcomment(int c);
void incomment(void);
void echo_quote(int c);
 
int main(void)
{
    int c;
    printf(" enter // comment line  or  /* comment string */ \n");
    while ((c = getchar()) != EOF)
        rcomment(c);
    return 0;
}
 
void rcomment(int c)
{
    int d;
    if (c == '/')
    {
        if ((d = getchar()) == '*')
            incomment();
        else if (d == '/')
        {
            incomment();
            // echo_quote(c);
        }
        else
        {
            putchar(c);
            putchar(d);
        }
    }
    else if (c == '\'' || c == '"')
        echo_quote(c);
    else
        putchar(c);
}
 
void incomment()
{
    int c, d;
    c = getchar();
    d = getchar();
 
    while (c != '*' || d != '/')
    {
        c = d;
        d = getchar();
    }
}
void echo_quote(int c)
{
    int d;
    putchar(c);
    while ((d = getchar()) != c)
    {
        putchar(d);
 
        if (d == '\\')
            putchar(getchar());
    }
    putchar(d);
}