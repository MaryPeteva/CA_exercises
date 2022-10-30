#ifndef TASK06
#define TASK06

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max(a,b) (a>b) ? a : b

struct node 
{
    int item;
    struct node *left;
    struct node *right;
};
 
void inorderTraversal(struct node *root);
struct node *createNode(int value);
struct node *insert(struct node *curr, int value);
struct node *merge(struct node *root1, struct node *root2, struct node *result);

#endif