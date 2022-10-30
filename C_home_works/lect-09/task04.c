#include<stdio.h>
#include<stdlib.h>
//------TC-----
int (*pntr[2])();
void fillArr(int arr[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        arr[i] = rand()%100;
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    ftype(arr,n);
}
void swap(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
void ascendingSort(int arr[], int n)
{
    int count = 0;
	while(count<n-1)
	{
	  for(int i = 0; i < n-1; i++)
	  {
	     if (arr[i+1] < arr[i])
		{
		   swap( &arr[i],&arr[i+1]);
		}
	  }
	}
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void descendingSort(int arr[], int n)
{
    int count = 0;
	while(count<n-1)
	{
	  for(int i = 0; i < n-1; i++)
	  {
	     if (arr[i+1] > arr[i])
		{
		   swap( &arr[i],&arr[i+1]);
		}
	  }
	}

    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void ftype(int arr[],int n)
{
    pntr[0] = ascendingSort;
    pntr[1] = descendingSort;

    printf("How to sort it: 'A' for ascending or 'D' for descending order?\n");
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A':
            (*pntr[0])(arr,n);
        break;
        case 'D':
            (*pntr[1])(arr,n);
        break;
    
    }
}
int main()
{
    //write a func to sorn a integer array
    //read the size of the array 'n'
    //read the 'direction' 'A' for ascending or 'D' for descending order
    //ftype pointer to function that reads the size of the array,the array and the direction to sort
    int n = 0;
    int result = 0;
    int arr[n];
    printf("Enter size for the array:\n");
    scanf("%d", &n);
    fillArr(arr,n);
    

}