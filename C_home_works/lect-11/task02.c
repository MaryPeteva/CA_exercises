/*Set to zero the bits in numbers located at
positions 3 and 7.*/
#include<stdio.h>
int manipulatePosition(int num, int pos, int bitValue)
{
    int mask = 1 << pos;
    return ((num & ~mask) | (bitValue << pos));
    
}
int main()
{
    /*-23 ->  1110 1001
      62  ->  0011 1110
      24  ->  0001 1000
      31  ->  0001 1111
      125 ->  0111 1101*/
    
    int num = 62;
    int posOne = 3;
    int posTwo = 7;
    int bitValue = 0;

    printf("After first  manipulation: %d\n", manipulatePosition(num, posOne, bitValue));
    printf("After second  manipulation: %d\n", manipulatePosition(num, posTwo, bitValue));

    return 0;
}