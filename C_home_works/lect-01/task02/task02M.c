/* The cup has a volume of 8 ounces. Write a program to ask the user how much
ounces would also like her to return the number of cups he ordered*/
#include"task02H.h"

int main()
{
    
    int iOunceWanted = readOrder(iOunceWanted);
    int iGlassesOrdered = calculateOuncesToGlass(iOunceWanted);
    printf("You've ordered: %d glasses\n",iGlassesOrdered);

    return 0; 
}