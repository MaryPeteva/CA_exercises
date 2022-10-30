#include"task05H.h"

treenode *createnode(int value) 
{
    treenode* result = malloc(sizeof(treenode));
    if (result != NULL) 
    {
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

void printtabs(int numtabs) 
{
    for (int i=0; i < numtabs; i++) 
    {
        printf("\t");
    }
}

void printtree_rec(treenode *root, int level) 
{
    if (root == NULL) 
    {
        printtabs(level);
        printf("---<empty>--\n");
        return;
    }
    printtabs(level);
    printf("value = %d\n", root->value);
    printtabs(level);
    printf("left\n");

    printtree_rec(root->left, level+1);
    printtabs(level);
    printf("right\n");
    
    printtree_rec(root->right,level+1);

    printtabs(level);
    printf("done\n");
}

void printtree(treenode* root) 
{
    printtree_rec(root, 0);
}