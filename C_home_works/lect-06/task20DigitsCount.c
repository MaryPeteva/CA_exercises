#include<stdio.h>
int countDigits(int);
int main()
{  
    //read a number and print the number of digits in it with recursive function
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d\n",countDigits(num));
}
int countDigits(int num)
{
    static int count = 1;
    int tmp = num;
    tmp /= 10;
    num = tmp;
   if(tmp!=0)
   {
       countDigits(num);
       count++;
   }

    return count;
}