#ifndef HOMEWORK
#define HOMEWORK

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;


void enqueue(int num);
void fillList(int count);
void display();
void displayEvenOdd();

#endif