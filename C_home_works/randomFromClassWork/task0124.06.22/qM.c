#include"qH.h"

int main()
{
    struct queue *lessThanTen;
    struct queue *lessThanFifthy;
    struct queue *moreThanFifty;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);

        if(num < 10)
        {
            enqueue(lessThanTen,num);
        }
        else if (num >= 10 && num < 50)
        {
            enqueue(lessThanFifthy, num);
        }
        else if (num > 50)
        {
            enqueue(moreThanFifty,num);
        }
        
        
    }
    
    display(lessThanTen);
    display(lessThanFifthy);
    display(moreThanFifty);
}