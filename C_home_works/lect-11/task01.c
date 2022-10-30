/*Find the position of the oldest bit that is
with a value of 1 in a given number.*/
#include<stdio.h>
#include<math.h>
/*-23 ->  1110 1001
62  ->  0011 1110
24  ->  0001 1000
31  ->  0001 1111
125 ->  0111 1101*/
unsigned int getFirstSetBitPos(int number)
{

    return log2(number & -number) + 1;
    /*(number &~ (number - 1)) always return the binary number containing the 
    rightmost set bit as 1.
    може ли малко по-подробно обяснение защо*/
 
}
 
int main()
{

    int number = 62;
    printf("%u\n", getFirstSetBitPos(number));
    return 0;

}