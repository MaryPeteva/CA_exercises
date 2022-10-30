#include<stdio.h>
int main()
{
    for(int i=0;;i++)
    {
        printf("%d\t",i);
        if(i==48)
        {
            break;
        }
    }
    return 0;
}