#ifndef TASK05
#define TASK05

#include <stdio.h>
#include <stdlib.h>

typedef struct treenode 
{
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;

treenode *createnode(int value);
void printtabs(int numtabs);
void printtree_rec(treenode *root, int level);
void printtree(treenode* root);

#endif // TASK05