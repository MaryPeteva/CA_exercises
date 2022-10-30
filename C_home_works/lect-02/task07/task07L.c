#include"task07H.h"

void FirstPyramid()
{
 //base 11#
    int k = 0;
   for (int i = 1; i <= 6; ++i, k = 0) 
   {

    for (int j = 1; j <= 6 - i; ++j)
    {
        printf("  ");
    }

    while (k != 2 * i - 1)
    {
        printf("# ");
        ++k;
    }
    
    printf("\n");

   }
    
}

void SecondPyramid()
{
   
   for (int i = 6; i >= 1; --i) 
   {
        for (int j = 0; j < 6 - i; ++j)
        {
            printf("  ");
        }

        for (int k = i; k <= 2 * i - 1; ++k)
        {
            printf("# ");
        }
            
        for (int l = 0; l < i - 1; ++l)
        {
            printf("# ");
        }
         
        printf("\n");
   }

}

void Diamond()
{
    
int k = 0;


   for (int i = 1; i <= 6; ++i, k = 0) 
   {
      for (int j = 1; j <= 6 - i; ++j) 
      {
        printf("  ");
      }

      while (k != 2 * i - 1) 
      {
        printf("# ");
        ++k;
      }

      printf("\n");
   }
    for (int i = 6; i >= 1; --i) 
    {
      for (int j = 0; j < 6 - i; ++j)
      {
        printf("  ");
      }
         
      for (int k = i; k <= 2 * i - 1; ++k)
      {
        printf("# ");
      }
         
      for (int l = 0; l < i - 1; ++l)
      {
        printf("# ");
      }
         
      printf("\n");
   }
    

}