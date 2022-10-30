#include "task04H.h"

int countSymb(const char *string, char symb)
{
    int index = 1;
    int count = 0;

    while (string[index] != '\0')
    {
        if (symb == string[index])
        {
            count++;
        }
        
        index++;
    }
    
    return count;
}