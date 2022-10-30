#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Write a program that sums up two matrix (4x4) and writes
    // the result in a third one of the same size. 
    // find the sum of the corresponding elements in them. 
    //Data on output matrix must be entered by the user.
    // Print the three matrix in the console.
    int i,j;
    printf("Enter numbers for the first matrix:");
    int arrOne[4][4];

    for (i = 0; i < 4; i++)
    {
        for(j = 0; j<4; j++)
        {
            scanf("%d",&arrOne[i][j]);
        }
    }
    

    int arrTwo[4][4];
    printf("Enter numbers for the second matrix:");
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j<4; j++)
        {
            scanf("%d",&arrTwo[i][j]);
        }
    }

    int resultArr[4][4];

    for (i = 0; i < 4; i++)
    {
        for(j = 0; j<4; j++)
        {
            resultArr[i][j] = arrOne[i][j] + arrTwo[i][j];
        }
    }
    //printArr(arrOne[4][4], arrTwo[4][4], resultArr[4][4]);
    printf("First matrix\n");
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ",(arrOne[i][j]));
        }
        printf("\n");
    }

    printf("Second matrix\n");
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ",(arrTwo[i][j]));
        }
        printf("\n");
    }

    printf("Result matrix\n");
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ",(resultArr[i][j]));
        }
        printf("\n");
    }
    
}

