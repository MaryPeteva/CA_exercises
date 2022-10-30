#include<stdio.h>
#include<stdbool.h>
int main()
{
    //read a array 
    //print only the uniqe elements
    //it has to have some duplicate elements
    //ask for duplicating the elements on input???
    int size = 0;
    printf("Enter a array size");
    scanf("%d",&size);
    int arrOne[size];
    int arrTwo[size];
    int * pTwo = arrTwo;
    printf("Enter random numbers:");
    for (int i = 0; i < size; i++)
    {
        int n = 0;
        scanf("%d",&n);
        arrOne[i] = n;
    }
    for (int j = 0; j < size; j++)
    {
        for (int k = j; k < size; k++)
        {
            /* code */
        }
        
    }
    
    
    
    for (int d = 0; d < size; d++)
    {
        printf("\n%d\t",arrTwo[d]);
    }
    
}