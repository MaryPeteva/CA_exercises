#include"task02H.h"

int readNum(int iNum)
{
    scanf("%d", &iNum);
    return iNum;
}

int claculateArea(int iNum)
{
    int iA = 0;
    int iB = 0;
    int iIndex = 0;
    int iArea = 0;
    int rnd = 100000;

    for (int i = 0; i < 6; i++)
    {
        iIndex = iNum/rnd;
        if(iIndex%2==0)
        {
            iA+=iIndex;
        }
        else
        {
            iB+=iIndex;
        }

        iNum = iNum -(iIndex*rnd);
        rnd /=10;
        
    }
    
    iArea=iA*iB;

    return iArea;
}