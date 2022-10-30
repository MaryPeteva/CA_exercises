/* Break a number as a sum of powers of the pair.
1 get the number in binary
2 chek if value 1 -> 2 pow position
3 sum it */
#include<stdio.h>
#include<math.h>
void checkBinaryValueAndSumUp(int number)
{
    size_t sum = 0;
    printf("%d = ", number);
    for (size_t i = 0; i < 8; i++)
    {
        if(number % 2 !=0)
        {
            sum += pow(2,i);
            printf("2 ^ %ld+", i);
        }

        number /= 2;
    }
    /*немога да го измисля с побитова?????*/
    
   
}
int main()
{
    size_t number = 0;
    printf("Enter a number:\n");
    scanf("%ld", &number);
    checkBinaryValueAndSumUp(number);
}