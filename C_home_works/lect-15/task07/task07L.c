#include"task07H.h"

int areaOfRect(Point l1, Point r1)
{
    int area = abs(l1.x - r1.x) * abs(l1.y - r1.y);
    return area;
}

int sumOfareaOfRect(Point l1, Point r1,Point l2, Point r2)
{
    int area = areaOfRect(l1, r1) + areaOfRect(l2, r2);
    return area;
}

int overlappingArea(Point l1, Point r1, Point l2, Point r2)
{

    int area1 = areaOfRect(l1, r1);

    int area2 = areaOfRect(l2, r2);

    int x_dist = (min(r1.x, r2.x) - max(l1.x, l2.x));
    int y_dist = (min(r1.y, r2.y) - max(l1.y, l2.y));
    int areaI = 0;

    if (x_dist > 0 && y_dist > 0)
    {
        areaI = x_dist * y_dist;
    }

    return (area1 + area2 - areaI);
}

int FindPoints(Point l1, Point r1, Point l2, Point r2)
{
    Point first;
    Point second;
   
    first.x = max(l1.x, l2.x);
    first.y = min(l1.y, l2.y);

    
    second.x = min(r1.x, r2.x);
    second.y = max(r1.y, r2.y);

  
    if (first.x > second.x && first.y > second.y)
    {
       
        return 0;
    }

 
    int area = areaOfRect(first, second);

    return area;
}