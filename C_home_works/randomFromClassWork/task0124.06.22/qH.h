#ifndef TEST
#define TEST

#include<stdio.h>
#include<stdlib.h>
 
struct node{
	int data;
	struct node* next;
};

typedef struct node* ptr_queue;

struct queue{
	struct node* front, *rear;
};


struct queue *queue_init();

void enqueue(struct queue*, int);
void dequeue(struct queue*);
void display(struct queue*);

#endif