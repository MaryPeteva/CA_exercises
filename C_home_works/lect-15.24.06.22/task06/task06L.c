#include "task06H.h"

void fillQueue(int count, struct Queue *que)
{
    enqueue(que, count);

    struct Node *ptr;
    ptr = que->front;

    for (size_t i = 1; i <= 16; i++)
    {
        
        int x = ptr->data + 1;
        int y = (ptr->data * 2) + 1;
        int z = ptr->data + 2;

        enqueue(que, x);

        enqueue(que, y);

        enqueue(que, z);

        ptr = ptr->next;     
    }
}

void enqueue (struct Queue *myQueue, int x)
{
    struct Node *tmp;

    tmp = malloc (sizeof (struct Node));
    tmp->data = x;
    tmp->next = NULL;

    if (myQueue->front == NULL &&
        myQueue->rear == NULL)
    {
        myQueue->front = myQueue->rear = tmp;
        return;
    }
    myQueue->rear->next = tmp;
    myQueue->rear = tmp;
}

void display(struct Queue *myQueue)
{
    struct Node *tmp;

    tmp = myQueue->front;

    while (tmp != NULL)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
    
}

struct Queue *QueueInit()
{
    struct Queue *thisQueue = malloc (sizeof(struct Queue));
    thisQueue->front = NULL;
    thisQueue->rear = NULL;

    return thisQueue;
}
