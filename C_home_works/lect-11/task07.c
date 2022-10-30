/* Reverse the bits of a number that are on
odd position*/
#include<stdio.h>
int changeOddPosBits(int n)
{

    int result = n;

    for (int i = 1; ((result)>>i)!=0; i+=2) 
    {
        result |= (1 << i);
    }
 
    return (result);
}
int main()
{

    int num = 20;
    printf("Number after setting all odd bits: %d\n", changeOddPosBits(num));
}