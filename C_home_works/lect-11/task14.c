// Write to eight consecutive bytes in memory with value
// 0xBB(1011 1011) and print the contents of the upper bytes if the type is:
// double, signed long long, unsigned long long
#include<stdio.h>
int main(int argc, char **argv) 
{
    double doubleValue = 0xBB;
    char *pntrDouble = (char *) &doubleValue;
    int i;
    printf("Float value: ");
    for (i = 0; i < sizeof(doubleValue); i++)
    {
        printf("Address: %p, Value: %02hhX\n", pntrDouble, *pntrDouble);
        pntrDouble += 1;
    }

    long long longLongValue = 0xBB;
    char *pntrlongLong = (char *) &longLongValue;
    int j;
    for (j = 0; j < sizeof(longLongValue); j++)
    {
        printf("Address: %p, Value: %02hhX\n", pntrlongLong, *pntrlongLong);
        pntrlongLong += 1;
    }

    unsigned long long unLongLongValue = 0xAA;
    char *pntrUnInt = (char *) &unLongLongValue;
    int k;
    for (k = 0; k < sizeof(unLongLongValue); k++)
    {
        printf("Address: %p, Value: %02hhX\n", pntrlongLong, *pntrlongLong);
        pntrlongLong += 1;
    }
    return 0;
}