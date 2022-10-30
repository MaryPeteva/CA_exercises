/*Дадени са двe опашки от числа, подредени в нараства ред от началото
към края на опашката. Да се напише функция mergeQueues, която чрез
операциите InsertElem и DeleteElem построява нова опашка, която се състои
от всички елементи на дадените две опашки, подредени в нарастващ ред от
началото към края.
Пример: ако първата опашка съдържа 1, 3, 5, а втората опашка съдържа
числата 1, 2, 6, получената опашка трябва да съдържа числата 1, 1, 2, 3, 5, 6.
*/
#include "task12H.h"

//                          Main

int main()
{   
    Queue *headFirst = QueueInit();
    printf("First queue:\n");
    fillQueue(headFirst);

    printf("Second queue:\n");
    Queue *headSecond = QueueInit();
    fillQueue(headSecond);

    Queue *headResult = QueueInit();
    sortAndFillQueue(headResult, headFirst, headSecond);
    display(headResult);

    return 0;
}

