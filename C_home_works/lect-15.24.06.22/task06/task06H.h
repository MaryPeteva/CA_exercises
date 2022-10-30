#ifndef HOMEWORK
#define HOMEWORK

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

typedef struct Node* ptrQueue;

struct Queue
{
    struct Node *front, *rear;
};

struct Queue *QueueInit();

void enqueue (struct Queue *, int);
void display(struct Queue *);
void fillQueue(int count, struct Queue *que);

#endif