#ifndef HOMEWORK
#define HOMEWORK

#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

typedef struct Point
{
    int x, y;
} Point;

int areaOfRect(Point l1, Point r1);
int sumOfareaOfRect(Point l1, Point r1, Point l2, Point r2);
int overlappingArea(Point l1, Point r1, Point l2, Point r2);
int FindPoints(Point l1, Point r1, Point l2, Point r2);

#endif