/*read a four digit num and sum its digits*/

#include"task04H.h"

int main()
{
    
    int iNum = 0;
    iNum = readNum(iNum);
    printf("The sum of %d's digits is: %d\n", iNum, calculateSumOfDigits(iNum));

    return 0;
    
}
