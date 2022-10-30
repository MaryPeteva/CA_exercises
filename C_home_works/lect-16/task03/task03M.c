/*Напишете C програма за броене на главни, малки и специални
символи в низ.*/
#include "task03H.h"

int main()
{   
    int array[3] = {0};

    const char string[] = "Adsaw !$";

    countSymb(array, string);

    printf("Low letters: %d\nBig letters: %d\nSpecial symbs: %d\n",
            array[0], array[1], array[2]);
    
    
    return 0;
}
