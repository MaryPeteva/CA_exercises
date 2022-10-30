#include "task06H.h"

struct node *merge(struct node *root1, struct node *root2, struct node *result)
{
    if (root1 == NULL && root2 == NULL)
    {
        return result;
    }
 
    if (root1 != NULL && root2 != NULL)
    {
        if(root1 < root2)
        {

            return (merge(root2->left, root2->right, result));
            result = insert(result, root1->item);
            result = insert(result, root2->item);
 
        }
        else
        {
        
            return (merge(root1->left, root1->right, result));

        }
    }
    else if (root1 != NULL)
    {
        result = insert(result, root1->item);
        return (merge(root1->left, root1->right, result));
    }
    else if (root2 != NULL)
    {
        result = insert(result, root2->item);
        return (merge(root2->left, root2->right, result));
    }
 
    return result;
}
 
struct node *createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
 
    return newNode;
}
 
struct node *insert(struct node *curr, int value)
{
    if (curr == NULL)
    {
        return createNode(value);
    }
 
    if (value < curr->item)
    {
        curr->left = insert(curr->left, value);
    }
    else
    {
        curr->right = insert(curr->right, value);
    }
 
    return curr;
}
 
void inorderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
 
    inorderTraversal(root->left);
    printf(" %d->", root->item);
    inorderTraversal(root->right);
}