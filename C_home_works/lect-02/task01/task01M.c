/*write a program that reads a six-digit integer,
separates from it the digits in positions 1,3,5 and 6 and forms a new one with these digits
a four-digit number. If we consider this new number as
year, the program should output whether this year is a leap year or not.*/
#include"task01H.h"

int main()
{
    int iNum = readNum(iNum);
    int iYear = takeDigits(iNum);
    theYearIsOtNotLeap(iYear);
    return 0;
    
}

