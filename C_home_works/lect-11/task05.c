/*Raise all bits of a 32-bit number,
in positions divisible by 3.
? if pos % 3 == 0 -> pos = 1?*/
#include<stdio.h>
long int manipulatePosition(size_t num, int pos, int bitValue)
{
    size_t mask = 1 << pos;
 while (pos < 32)
 {
    manipulatePosition(num, pos, bitValue);
    pos += 3;   
 }
 /*without pos += 3 -> Segmentation fault(core dumped)
 with pos += 3 -> starts from the 1st index not 0th
 start num:   3734777777 -> 11011110100111000010111110110001
 result:      3734777778 -> 11011110100111000010111110110010
 desired num: 3753689081 -> 11011111101111001011111111111001*/
    return ((num & ~mask) | (bitValue << pos));
    
}
int main() 
{
    /*start 3734777777-> 11011110100111000010111110110001
        end 3753689081 ->11011111101111001011111111111001*/
    size_t number = 3734777777;
    int bitValue = 1;
    int pos = 3;
    printf("%ld", manipulatePosition(number, pos, bitValue));
    
}