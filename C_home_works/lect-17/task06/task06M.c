#include "task06H.h"

int main()
{   
    struct node *root1 = NULL;
    struct node *root2 = NULL;
 
    root1 = insert(root1, 5);
    root1 = insert(root1, 2);
    root1 = insert(root1, 6);
    root1 = insert(root1, 1);
    root1 = insert(root1, 9);
 
    root2 = insert(root2, 4);
    root2 = insert(root2, 3);
    root2 = insert(root2, 7);
    root2 = insert(root2, 8);
    root2 = insert(root2, 10);
 
    printf("\nInorder traversal\n");
    inorderTraversal(root1);
    printf(" Null");
 
    printf("\nInorder traversal\n");
    inorderTraversal(root2);
    printf(" Null");
 
    struct node *result = NULL;
    result = insert(result, root1->item);
    result = merge(root1, root2, result);
 
    printf("\nInorder traversal\n");
    inorderTraversal(result);
    printf(" Null");
 
 
    return 0;
}