// Write to four consecutive bytes in memory with a value
// 0xAA(10101010) and print the contents of the upper bytes if the type is: float,
// signed int, unsigned int
#include<stdio.h>
int main(int argc, char **argv) 
{
    float floatValue = 0xAA;
    char *pntrFloat = (char *) &floatValue;
    int i;
    printf("Float value: ");
    for (i = 0; i < sizeof(floatValue); i++)
    {
        printf("Address: %p, Value: %02hhX\n", pntrFloat, *pntrFloat);
        pntrFloat += 1;
    }

    int intValue = 0xAA;
    char *pntrInt = (char *) &intValue;
    int j;
    for (j = 0; j < sizeof(intValue); j++)
    {
        printf("Address: %p, Value: %02hhX\n", pntrInt, *pntrInt);
        pntrInt += 1;
    }

    unsigned  int unIntValue = 0xAA;
    char *pntrUnInt = (char *) &unIntValue;
    int k;
    for (k = 0; k < sizeof(unIntValue); k++)
    {
        printf("Address: %p, Value: %02hhX\n", pntrUnInt, *pntrUnInt);
        pntrUnInt += 1;
    }
    return 0;
}