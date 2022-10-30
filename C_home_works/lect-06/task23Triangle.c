#include<stdio.h>
#include<stdbool.h>
bool isTriangle(int,int,int);
int main()
{
    //read sides 'a','b','c'
    //check if it's possible to form a triangle with them
    int a,b,c;
    printf("Enter three sides:");
    scanf("%d %d %d",&a,&b,&c);
     bool isTriangle(int a,int b,int c);
   if(isTriangle(a,b,c))
    {
        printf("It is possible triangle");
    }
    else
    {
        printf("It is not possible triangle");

    }
}
bool isTriangle(int a, int b, int c)
{
    bool isTri = false;
    if((a<b+c)&&(b<a+c)&&(c<a+b))
    {
        isTri = true;
    }
    else
    {
        isTri=false;
    }

    return isTri;
}