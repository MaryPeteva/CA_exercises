/*Task 8. Make a structure struct rect that contains c
myself two points. Create an object of type this structure named
screen. Use the makepoint function to set a starting point
screen (0, 0) and endpoint (15, 15). Fill in the space
between them with dashes.*/
#include<stdio.h>
#include<stdlib.h>
struct Point
{
    int x;
    int y;
};

struct Point MakePoint(int x, int y)
{
    struct Point* pntr;
    pntr = malloc(sizeof(struct Point));
    pntr->x = x;
    pntr->y = y;

    return *pntr;
}

int main()
{
    struct Point topLeftCorner = MakePoint(0,0);
    struct Point bottomRightCorner = MakePoint(15,15);

    for (size_t i = topLeftCorner.x; i < bottomRightCorner.x; i++)
    {
        for (size_t j = topLeftCorner.y; j < bottomRightCorner.y; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    
}
