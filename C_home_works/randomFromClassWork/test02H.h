#ifndef TEST
#define TEST

#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
    int data;
    struct node * prev;
}node;
 
typedef struct stack
{
    struct node * top;
}stack;
 
stack* init();
void push(struct stack * currentStack,int data);
void pop(struct stack * currentStack);
void display(struct stack * currentStack);

#endif