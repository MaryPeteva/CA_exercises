#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
    int front,rear,size;
    unsigned capacity;
    int* arr;
}queue;

queue* createQueue(unsigned capacity);
int isFull(struct queue* queue);
int isEmpty(struct queue* queue);
void enqueue(struct queue* queue, int item);
int dequeue(struct queue* queue);
int front(struct queue* queue);
int rear(struct queue* queue);
int main()
{

}

struct queue* createQueue(unsigned capacity)
{
    struct queue* queue = (struct queue*)malloc(
        sizeof(struct queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
 
    // This is important, see the enqueue
    queue->rear = capacity - 1;
    queue->arr = (int*)malloc(
        queue->capacity * sizeof(int));
    return queue;
}
 
// Queue is full when size becomes
// equal to the capacity
int isFull(struct queue* queue)
{
    return (queue->size == queue->capacity);
}
 
// Queue is empty when size is 0
int isEmpty(struct queue* queue)
{
    return (queue->size == 0);
}
 
// Function to add an item to the queue.
// It changes rear and size
void enqueue(struct queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1)
                  % queue->capacity;
    queue->arr[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueued to queue\n", item);
}
 
// Function to remove an item from queue.
// It changes front and size
int dequeue(struct queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1)
                   % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
 
// Function to get front of queue
int front(struct queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->front];
}
 
// Function to get rear of queue
int rear(struct queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->rear];
}