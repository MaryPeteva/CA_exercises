/*HW Task 8. Write your own type for a Node structure containing
one member of type int and one pointer to the type of the structure itself. Set aside
dynamically memory for an array of 10 elements of this structure with malloc. For
fill each element of the array with its sequence number.
Print the results.*/
#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node
{
    int num;
    int *arr;
} Node;
 
int main()
{
    Node element;
    element.arr = malloc(sizeof(int) * 10);
 
    for (int i = 0; i < 10; i++)
    {
        element.arr[i] = i;
    }
 
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", element.arr[i] = i);
    }
 
    free(element.arr);
    return 0;
}