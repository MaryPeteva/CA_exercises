#include<stdio.h>

void spiral(int array[10][10], int size);

int main()
{
    int size = 0;
    scanf("%d", &size);
    int array[size][size];

     int maxNum, i, x = 0, y = 1, num = size*size;
    maxNum = size*size;
    while ( num >= 0 )
    {

        for (i = x; i < size; i++)
        {
            if (num <= size) {
                array[x][i] = num;
                num--;
            } else array[x][i] = 0;
        }

        if (num == maxNum + 1)
        {
            break;
        }

        for (i = y; i < size; i++)
        {
            if (num <= size) {
                array[i][size - 1] = num;
                num--;
            } else array[i][size - 1] = 0;
        }

        if (num == maxNum + 1)
        {
            break;
        }

        y++;
        size--;

        for (i = size - 1; i > x; i--)
        {
            if (num <= size) {
                array[size - 1][i] = num;
                num--;
            } else array[size - 1][i] = 0;
        }

        if (num == maxNum + 1)
        {
            break;
        }


        for (i = size - 1; i > x; i--)
        {
            if (num <= size) {
                array[i][x] = num;
                num--;
            } else array[i][x] = 0;
        }
        x++; 
        size--;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", array[i][j]);
        }
        
    }
    
}