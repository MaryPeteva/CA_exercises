#include"task02H.h"
int readOrder(int iOuncesWanted)
{
    printf("How many ounces you want?\n");
    scanf("%d", &iOuncesWanted);

    return iOuncesWanted;
}
int calculateOuncesToGlass(int iOuncesWanted)
{
    int iGlassesOrdered = iOuncesWanted / 8;
    
    return iGlassesOrdered;
    
}