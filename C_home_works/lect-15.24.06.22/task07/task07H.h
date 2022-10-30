#ifndef HOMEWORK
#define HOMEWORK

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
    struct Node* prev;
};

typedef struct Node* ptrQueue;

struct Queue
{
    struct Node *front, *rear;
};

struct Queue *QueueInit();

void enqueue (struct Queue *, int);
void display(struct Queue *);
void shortWay(int small, int big, struct Queue *queue);

#endif