#ifndef TEST
#define TEST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

extern struct node *top;
extern struct node *base;

void fillStack(int);
void display();
void push(int);
void changeNthElement(int searchedElem, int newValue, int size);

#endif