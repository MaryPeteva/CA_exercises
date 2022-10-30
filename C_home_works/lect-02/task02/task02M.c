/*write a program that reads a six-digit integer and
finds the face of the rectangle with side a equal to the sum of non-
the even digits and side b equal to the sum of the even digits.*/
#include"task02H.h"
int main()
{

    int iNum = readNum(iNum);
    printf("The area of rectangle is: %d\n",claculateArea(iNum));

    return 0;
}
