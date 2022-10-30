/* Напишете C програма за намиране на всички срещания на
символ в низ.*/
#include "task04H.h"                        

int main()
{   
    const char string[] = "raka taka shaka";
    char symb;
    printf("Enter symb\n");
    scanf(" %c", &symb);

    int count = countSymb(string, symb);

    printf("%d", count);
    
    return 0;
}
