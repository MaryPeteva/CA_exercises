/*Remove all bits of a number after the nth
bit inclusive.*/
#include<stdio.h>
int removeBits(int number, int pos)
{
    int mask = number;
    /*remove == set evrything to 0?*/
    for (size_t i = pos+1; i < 8; i++)
    {
       
        mask = (number & (~(1 << (i-1))));
        number = mask;
    }
    
    return mask;
}
int main()
{
    /*-23 ->  1110 1001
      62  ->  0011 1110
      24  ->  0001 1000
      31  ->  0001 1111
      125 ->  0111 1101*/
    int number = 125;
    int pos = 0;
    printf("Enter a position after wich the bits to be removed:\n");
    scanf("%d", &pos);

    printf("After removing bits: %d\n", removeBits(number, pos));
}