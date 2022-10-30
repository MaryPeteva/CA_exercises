/*Напишете следните функции:
● Функция, която проверявя дали едно число е просто
● Функция, която връща най-големия общ делител на две числа
● Функция, която използва горната функция и по даден като параметър
 масив от цели числа, връща НОД на елементите от масива*/
#include "task02H.h"

//                          Main

int main()
{   
    //Check is num simple
    printf("Enter a number to check if it's simple:\n");
    int num1 = 0;
    int num2 = 0;
    scanf("%d", &num1);
    if (checkSimpleNum(num1))
    {
        printf("It's simple\n");
    }
    else
    {
        printf("It's not simple\n");
    }

    //Get greatest devider of two numbers
    printf("Enter two numbers to find greatest divider:\n");
    scanf("%d %d", &num1, &num2);
    printf("Devider: %d\n", equalDevider(num1,num2));


    printf("Enter a size of the array:\n");
    int size = 0;
    scanf("%d", &size);
    int array[size];
    fillArr(array,size);

    greatestDevider(array,size);
    
    return 0;
}