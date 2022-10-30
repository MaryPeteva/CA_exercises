/* Find the number of bit positions in which two
numbers differ*/
#include<stdio.h>
int compareBits(int numOne,  int numTwo, int count)
{
    for (size_t i = 0; i < 32; i++)
    {
        if(((numOne >> i) & 1) != ((numTwo >> i) & 1))
        {
            count++;
        }
    }
    
    return count;
}
int main()
{
    int numOne = 0;
    int numTwo = 0;
    int count = 0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &numOne, &numTwo);
    count = compareBits(numOne, numTwo, count);
    printf("The number of different bits is %d\n", count);
    
}