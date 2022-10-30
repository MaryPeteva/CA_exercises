#include "task03H.h"

void countSymb(int *array, const char string[])
{
    int index = 0;

    while (string[index] != '\0')
    {
        if (string[index] >= 'a' && string[index] <= 'z')
        {
            array[0]++;
        }
        else if(string[index] >= 'A' && string[index] <= 'Z')
        {
            array[1]++;
        }
        else if((string[index] >= 33 && string[index] <= 47) ||
                (string[index] >=58 && string[index] <=64) ||
                (string[index] >= 91 && string[index] <=96) ||
                (string[index] >= 123 && string[index] <= 126))
        {
            array[2]++;
        }

        index++;
    }
}