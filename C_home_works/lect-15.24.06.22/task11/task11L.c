#include"task11H.h"

int buyCandy(int currentCandy)
{
    currentCandy++;
    return currentCandy;
}

int eatAndDoubleAmountCandy(int currentCandy)
{
    if(currentCandy > 1)
    {
        currentCandy--;
    }        
            
    if(currentCandy > 0)
    {
                
        if (currentCandy > 0)
        {
            currentCandy = currentCandy*2;
        }        
                
    }

    return currentCandy;        
}