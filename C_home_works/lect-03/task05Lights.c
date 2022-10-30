#include <stdio.h>
#include <limits.h>
#include <unistd.h>
int main(unsigned char byte)
{
  //if we take a decimal num and turn it into binary
    int num;
    int i = 4;
    scanf("%d",&num);
  unsigned char bytes[5];
     while (num!=0)
     {

        if(num%2==0)
        {
          bytes[i]=0;
        }
        else
        {
          bytes[i]=1;
        }
        num=num/2;
        i--;
      }
     for (int i = 0; i < sizeof(bytes); i++)
    {
      if(bytes[i]==1)
      {
        for (int j = 0; j < i; j++)
       {
         printf(".");
       }
       
         printf("*");
       
       if(i<sizeof(bytes))
       {
        for (int k = i+1; k < sizeof(bytes); k++)
       {
         printf(".");
       }

      }

      printf(""); 
      unsigned int sleep(1000);
    }
  }
}
