/*Дадени са числа N и M и следните операции:
N = N+1
N = N+2
N = N*2
Напишете програма, която намира най-кратката поредица от посочените операции, която
започва от N и завършва в M. Използвайте опашка.
Пример: N = 5, M = 16
Поредицата е: 
5 7 8 16
  6
*/
#include "task07H.h"

int main()
{   
    struct Queue *que = QueueInit();

    int small = 0;
    int big = 0;
    printf("From: ");
    scanf("%d", &small);

    printf("To: ");
    scanf("%d", &big);

    shortWay(small, big, que);
    display(que);
    
    return 0;
}


