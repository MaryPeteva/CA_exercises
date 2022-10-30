#include"task20H.h"

void fillMatrix(int **matrix, int row, int col)
{
    int value = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            matrix[i][j] = value;
            value++;
        }
    }
}

void printMatrix(int **matrix,int row, int col)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int swap(int **matrix,int row, int col)
{
    int **tmp = (int **)malloc(SIZE * sizeof(int *));
    for (int row = 0; row < SIZE; row++) 
    {
        tmp[row] = (int *)malloc(SIZE * sizeof(int));
    }

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            tmp[i][j] = matrix[j][i];
            
        }
 
    }
/*can't figure out how to change the value of matrix any other way!!!!!!*/
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            matrix[i][j] = tmp[i][j];
        }
        
    }
        
}