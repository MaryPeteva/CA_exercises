/*HW – to complete Task 7.
Write an array of structures called key_tab[ ] using this,
defined in the exercise above - user type key_t which
contains a character string and a number. Initialize the array with all
C keywords by allocating memory for each keyword
dynamically. Print the array.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20
#define SIZE_OF_KEY_T 30

typedef struct
{
    char str[MAX_LEN];
    int number;
} key_t;

void printArr(key_t *arr);

int main()
{
    key_t *words = (key_t *)malloc(sizeof(key_t) * SIZE_OF_KEY_T);
    strcpy(words[0].str, "auto");
    words[0].number = 1;
    strcpy(words[1].str, "break");
    words[1].number = 2;
    strcpy(words[2].str, "case");
    words[2].number = 3;
    strcpy(words[3].str, "char");
    words[3].number = 4;
    strcpy(words[4].str, "continue");
    words[4].number = 5;
    strcpy(words[5].str, "do");
    words[5].number = 6;
    strcpy(words[6].str, "default");
    words[6].number = 7;
    strcpy(words[7].str, "const");
    words[7].number = 8;
    strcpy(words[8].str, "double");
    words[8].number = 9;
    strcpy(words[9].str, "else");
    words[9].number = 10;
    strcpy(words[10].str, "enum");
    words[10].number = 11;
    strcpy(words[11].str, "extern");
    words[11].number = 12;
    strcpy(words[12].str, "for");
    words[12].number = 13;
    strcpy(words[13].str, "if");
    words[13].number = 14;
    strcpy(words[14].str, "int");
    words[14].number = 15;
    strcpy(words[15].str, "float");
    words[15].number = 16;
    strcpy(words[16].str, "goto");
    words[16].number = 17;
    strcpy(words[17].str, "register");
    words[17].number = 18;
    strcpy(words[18].str, "return");
    words[18].number = 19;
    strcpy(words[19].str, "signed");
    words[19].number = 20;
    strcpy(words[20].str, "sizeof");
    words[20].number = 21;
    strcpy(words[21].str, "short");
    words[21].number = 22;
    strcpy(words[22].str, "switch");
    words[22].number = 23;
    strcpy(words[23].str, "struct");
    words[23].number = 24;
    strcpy(words[24].str, "typedef");
    words[24].number = 25;
    strcpy(words[25].str, "union");
    words[25].number = 26;
    strcpy(words[26].str, "void");
    words[26].number = 27;
    strcpy(words[27].str, "while");
    words[27].number = 28;
    strcpy(words[28].str, "volatile");
    words[28].number = 29;
    strcpy(words[29].str, "unsigned");
    words[29].number = 30;

    printArr(words);

    free(words);

    return 0;
}

void printArr(key_t *arr)
{
    for (int i = 0; i < SIZE_OF_KEY_T; i++)
    {
        printf("%d-%s\n", arr[i].number, arr[i].str);
    }
}