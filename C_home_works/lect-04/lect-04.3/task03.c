#include<stdio.h>
#include<math.h> 
int main()
{
    //read a num 'n' and find all the pairs of nums 'm'&'k' for witch is true
    //m(pow2)+k(pow2)=n
    int n,m,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        m=pow(i,2);
        for (int j = i; j <= n; j++)
        {
            k=pow(j,2);
            int sum = m+k;
            if(sum==n)
            {
                printf("The pair %d and %d equals %d",i,j,n);
            }
        }
        
    }
    
    
}
