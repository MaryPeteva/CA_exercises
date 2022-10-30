#include"task06H.h"
int main()
{
    int year = readInput();    
    bool isLeap= isTheYearLeap(year);

    printf("%d", calculateSeconds(isLeap));
}