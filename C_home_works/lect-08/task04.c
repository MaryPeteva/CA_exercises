#include<stdio.h>
#include<stdbool.h>
int main()
{
    // Write a program that checks if a matrix is identity matrix
    // matrix of size (N x N), where only the elements in the main
    // diagonals are 1 and all other elements are 0
    int n = 0;
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    bool isIdentity = true;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j< n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i == j && arr[i][j] != 1)
            {
                isIdentity = false;
                break;
            }
            else if (i != j && arr[i][j] != 0)
            {
                isIdentity = false;
                break;
            }
            
        }
        
    }

    if(isIdentity)
    {
        printf("The matrix is identity matrix\n");
    }
    else
    {
        printf("The matrix is not identity matrix\n");
    }

}