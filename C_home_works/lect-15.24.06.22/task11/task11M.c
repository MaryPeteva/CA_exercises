#include"task11H.h"
/*11. Обичате да ядете бонбони, нали. Искате винаги да имате N бонбона в
себе си. Всеки час можете да си купите по един бонбон, да изядете по един
бонбон, който имате, или да удвоите всички бонбони. За колко най-малко
часа може да постигнете това?*/
/*from the first hour:
for evry odd hour currentCandy++
for evry even hour currentCandy - 1 and then currentCandy*2*/

int main()
{
    int desiredCandy = 0;
    printf("Enter desired amount of candy:\n");
    scanf("%d", &desiredCandy);
    int currentCandy = 1;
    int hour = 1;

    while (currentCandy <= desiredCandy)
    {
        
        if(hour % 2 == 0)
        {
            currentCandy = buyCandy(currentCandy);
        }
        else
        {
            currentCandy = eatAndDoubleAmountCandy(currentCandy);
        }

        hour++;
        printf("%d\n",currentCandy);
    } 
    
    printf("%d", hour);
}



