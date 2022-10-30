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


int main()
{

}

void enqueue(struct queue *my_queue, int value){
	struct node* temp;

	temp = (struct node*) malloc(sizeof(struct node));
	temp->data = value;
	temp->next = NULL;

	if (my_queue->front == NULL && my_queue->rear == NULL){
		my_queue->front = my_queue->rear = temp;
		return;
	}
	my_queue->rear->next = temp;
	my_queue->rear = temp;
}

// dequeue operation
void dequeue(struct queue *my_queue){
	struct node* temp = my_queue->front;

	if (my_queue->front == NULL){
		return;
	}

	if (my_queue->front == my_queue->rear){
		my_queue->front = my_queue->rear = NULL;
	}
	else{
		my_queue->front = my_queue->front->next;
	}
	free(temp);
}

// print operation
void display(struct queue *my_queue){
	struct node* temp = my_queue->front;
	while(temp){
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}