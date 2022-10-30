#include<stdio.h>
int main()
{
    //geometrical progression
    //read the first digit 'a' read the step 'q' read the desired digit to show'n'

    int a,q,n;
      printf("Enter your first digit and step:");
    scanf("%d %d",&a,&q);
    printf("How many digits want to show?");
    scanf("%d",&n);
    if(q!=0)
    {
        for (int i = a; i <= n; i*=q)
    {
        printf("%d\n",i);
    }
    }
    else
    {
        printf("Wrong input!Step cant be 0!\n");
    }
    return 0;
}