#include "task12H.h"

void fillQueue(Queue *que)
{
    int count = 0;
    printf("Enter count: ");
    scanf("%d", &count);

    int number = 0;
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter element: ");
        scanf("%d", &number);

        enqueue(que, number);
    }
    
}

void sortAndFillQueue(Queue *queueResult, Queue *headFirst, Queue *headSecond)
{
    Node *ptr_first, *ptr_second;

    ptr_first = headFirst->front;
    ptr_second = headSecond->front;

    while ((ptr_first != NULL) && (ptr_second != NULL))
    {
        if (ptr_first->data <= ptr_second->data)
        {
            enqueue(queueResult, ptr_first->data);
            ptr_first = ptr_first->next;
        }
        else
        {
            if (ptr_second != NULL)
            {
                enqueue(queueResult, ptr_second->data);
                ptr_second = ptr_second->next;
            }        
        }
    }

    if (ptr_first != NULL)
    {
        while (ptr_first != NULL)
        {
            enqueue(queueResult, ptr_first->data);
            ptr_first = ptr_first->next;
        }
    }
    else
    {
        while (ptr_second != NULL)
        {
            enqueue(queueResult, ptr_second->data);
            ptr_second = ptr_second->next;
        }
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
        printf(" %d->", tmp->data);
        tmp = tmp->next;
    }
    printf(" NULL\n");
}

struct Queue *QueueInit()
{
    struct Queue *thisQueue = malloc (sizeof(struct Queue));
    thisQueue->front = NULL;
    thisQueue->rear = NULL;

    return thisQueue;
}