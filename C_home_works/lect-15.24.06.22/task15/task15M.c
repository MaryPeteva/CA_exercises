#include<stdio.h>
#include<stdlib.h>

#define ROW 9
#define COL 11
/*
0,0,0,0,0,0,0,0,0,0,0
0,0,0,0,1,0,1,0,0,0,0
0,0,0,1,1,0,1,0,0,0,1
1,0,0,1,1,1,1,0,0,1,1
1,1,0,1,1,1,1,0,1,1,1
1,1,0,1,1,1,1,0,1,1,1
1,1,0,1,1,1,1,1,1,1,1
1,1,1,1,1,1,1,1,1,1,1
1,1,1,1,1,1,1,1,1,1,1
*/
void fillMatrix(int **matrix, int row, int col);
void printMatrix(int **matrix,int row, int col);
void findSubMatrix(int **matrix, int row, int col);

int main()
{
    int **matrix = (int **)malloc(COL * sizeof(int *));
    for (int row = 0; row < ROW; row++) 
    {
        matrix[row] = (int *)malloc(ROW * sizeof(int));
    }

    fillMatrix(matrix, ROW, COL);

    printMatrix(matrix, ROW, COL);

    findSubMatrix(matrix, ROW, COL);
}

void fillMatrix(int **matrix, int row, int col)
{
    /*незнам как да я предам по друг начин а да е потребителски вход е мъчение*/
   int matrixInput[ROW][COL] = {{0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,1,0,1,0,0,0,0},
                                {0,0,0,1,1,0,1,0,0,0,1},
                                {1,0,0,1,1,1,1,0,0,1,1},
                                {1,1,0,1,1,1,1,0,1,1,1},
                                {1,1,0,1,1,1,1,0,1,1,1},
                                {1,1,0,1,1,1,1,1,1,1,1},
                                {1,1,1,1,1,1,1,1,1,1,1},
                                {1,1,1,1,1,1,1,1,1,1,1}};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            matrix[i][j] = matrixInput[i][j];
            
        }
    }
}

void printMatrix(int **matrix, int row, int col)
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

void findSubMatrix(int **matrix, int row, int col)
{
    int sum = 0;
    int maxSum = 0;
    int rowEndIndex = 0;
    int rowStartIndex = 0;
    int colEndIndex = 0;
    int colStartIndex = 0;
    int maxColEndIndex = 0;
    int maxColStartIndex = 0;
    int maxRowEndIndex = 0;
    int maxRowStartIndex = 0;


    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {

            if(matrix[i][j] == 1)
            {
                rowStartIndex = i;
                colStartIndex = j;
                for (size_t k = i; k < row; k++)
                {
                    for (size_t l = j; l < col; l++)
                    {
                        sum += matrix[k][l];
                        if(matrix[k][l] == 0)
                        {
                            rowEndIndex = k;
                            colEndIndex = l;
                            if(sum >= maxSum)
                            {
                                maxRowStartIndex = rowStartIndex;
                                maxRowEndIndex = rowEndIndex;
                                maxColStartIndex = colStartIndex;
                                maxColEndIndex = colEndIndex;
                                maxSum = sum;
                                sum = 0;
                            }
                            break;
                        }

                        
                    }
                  
                }
                
            }
            
        }
        
    }
    
    for (size_t i = maxRowStartIndex; i <= maxRowEndIndex; i++)
    {
        for (size_t j = maxColStartIndex; j <= maxColEndIndex; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        
        printf("\n");
    }
    
}