#include<stdio.h>
int main()
{
    //print the quadrant a point is baset an it's x and y coordinates
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
    {
        printf("First quadrant");
    }
    else if (x>0&&y<0)
    {
        printf("Second quadrant");
    }
    else if (x<0&&y<0)
    {
        printf("Third quadrant");
    }
    else if (x>0&&y<0)
    {
        printf("Fourth quadrant");
    }
   
    
    
    
    
}