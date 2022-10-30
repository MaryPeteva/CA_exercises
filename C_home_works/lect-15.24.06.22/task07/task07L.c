#include "task07H.h"

void enqueue (struct Queue *myQueue, int x)
{
    struct Node *tmp;

    tmp = malloc (sizeof (struct Node));
    tmp->data = x;
    tmp->next = NULL;
    tmp->prev = NULL;

    if (myQueue->front == NULL &&
        myQueue->rear == NULL)
    {
        myQueue->front = myQueue->rear = tmp;
        return;
    }
    
    myQueue->rear->next = tmp;
    tmp->prev = myQueue->rear;
    myQueue->rear = tmp;
}

void display(struct Queue *myQueue)
{
    struct Node *tmp;

    tmp = myQueue->rear;

    while (tmp != NULL)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->prev;
    }
    
}

struct Queue *QueueInit()
{
    struct Queue *thisQueue = malloc (sizeof(struct Queue));
    thisQueue->front = NULL;
    thisQueue->rear = NULL;

    return thisQueue;
}

void shortWay(int small, int big, struct Queue *queue)
{
    enqueue(queue, big);
    while (small != big)
    {
        if (big / 2 >= small)
        {
            enqueue(queue, big / 2);
            big /= 2;
        }
        else if (big - 2 >= small)
        {
            enqueue(queue, big - 2);
            big -= 2;
        }
        else
        {
            enqueue(queue, big - 1);
            big--;
        }  
    }  
}