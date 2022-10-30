#include<stdio.h>
int main()
{
    
    int pirates,coconuts;
    scanf("%d %d",&pirates,&coconuts);
    int coconutsMorning = pirates * coconuts;
    int sum = 0.0;
    for (int i = 0; i < pirates; i++)
    {
        sum+=(coconutsMorning*2)+1;
    }
    
    
}