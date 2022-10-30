#ifndef LECTURE
#define LECTURE

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node* next;
}Node;

typedef Node* ptrQueue;

typedef struct Queue
{
    struct Node *front, *rear;
}Queue;


struct Queue *QueueInit();
void sortAndFillQueue(Queue *queueResult, Queue *headFirst, Queue *headSecond);
void enqueue (struct Queue *queue, int x);
void display(struct Queue *queue);
void fillQueue(Queue *que);

#endif