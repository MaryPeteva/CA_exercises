/*Задача 5. Да се напише рекурсивен вариант на функцията за обхождане на
двоично дърво.*/
/*а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14*/
#include"task05H.h"

int main() 
{
    treenode *n1 = createnode(7);
    treenode *n2 = createnode(14);
    treenode *n3 = createnode(28);
    treenode *n4 = createnode(35);
    treenode *n5 = createnode(65);
    treenode *n6 = createnode(12);
    treenode *n7 = createnode(18);
    treenode *n8 = createnode(42);
    treenode *n9 = createnode(81);
    treenode *n10 = createnode(64);
    treenode *n11 = createnode(61);
    treenode *n12 = createnode(4);
    treenode *n13 = createnode(13);

    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
    n3->right = n5;
    n4->left = n6;
    n4->right = n7;
    n5->left = n8;
    n5->left = n9;
    

    printtree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}