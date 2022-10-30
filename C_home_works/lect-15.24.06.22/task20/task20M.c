#include"task20H.h"
 
int main()
{
    int **matrix = (int **)malloc(SIZE * sizeof(int *));
    for (int row = 0; row < SIZE; row++) 
    {
        matrix[row] = (int *)malloc(SIZE * sizeof(int));
    }

    fillMatrix(matrix,SIZE,SIZE);

    printf("Originl matrix:\n");
    printMatrix(matrix, SIZE, SIZE);

    swap(matrix,SIZE,SIZE);

    printf("Swapped matrix:\n");
    printMatrix(matrix, SIZE, SIZE);
 
}

