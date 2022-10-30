/*sort 3 numbers in accending order*/
#include"task06H.h"

int main()
{
    int iNums[3];
    int *pntr = iNums;
    readArr(pntr);
    compareNums(pntr);
    printArr(pntr);
    return 0;
}

