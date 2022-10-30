#ifndef HOMEWORK
#define HOMEWORK

#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
    int value;
    struct node *next;
}node;
 
void fillList(node **head, int inputValue);
void display(node *);
void bubbleSort(node *start);
void swap(node *a, node *b);
void straightNumbers(node *subList, node *originalList);
 
#endif