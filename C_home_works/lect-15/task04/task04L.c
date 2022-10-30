#include "task04H.h"

int a[SIZE][SIZE]; 

void spirall()
{
    int row, col, rr, cc, tt, tr, tc, size, i; 
 
     printf("\n\n\t\tEnter dimension of the sqare matrix : "); 
     scanf("%d", &size); 
 
     row = 1; 
     col = 1; 
     rr = 1; 
     cc = 0; 
 
     for (i = 1; i <= size * size; i++) 
     { 
         a[row][col] = i; 
 
         tr = row + rr; 
         tc = col + cc; 
         if (tc > size || tr > size || tr < 1 || tc < 1 || a[tr][tc] != 0) 
         { 
             tt = rr; 
             rr = -cc; 
             cc = tt; 
         } 
         row = row + rr; 
         col = col + cc; 
     } 
 
     printf("\n\n\t\t Matrix : \n"); 
 
     for (row = 1; row <= size; row++) 
     { 
         for (col = 1; col <= size; col++) 
         { 
             printf("%4d", a[row][col]); 
         } 
         printf("\n"); 
     } 
}