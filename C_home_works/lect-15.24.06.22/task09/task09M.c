/*Напишете функция, която връща списък с всички прости числа в даден
интервал [a,b].
Числата a и b са параметри на функцията.
*/

#include "task09H.h"

int main()
{   
    linkedList *list = listInit();

    int from = 0, to = 0;
    printf("Enter from where: ");
    scanf("%d", &from);
    printf("Enter to where: ");
    scanf("%d", &to);

    fillList(list, from, to);
    display(list);
    
    return 0;
}
