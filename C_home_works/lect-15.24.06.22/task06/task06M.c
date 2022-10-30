#include "task06H.h"

int main()
{
    struct Queue *que = QueueInit();

    int count = 0;
    printf("Enter count: ");
    scanf("%d", &count);

    fillQueue(count, que);
    display(que);
}