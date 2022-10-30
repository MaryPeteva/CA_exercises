/*HW Task 11. Create a structure
fraction with data member int n(nominator=numerator)
and int d (denominator)
Using the typedef struct, create a new FRACTION type
and a pointer to it *FPTR
Define the functions
FRACTION create(int numerator, int denominator); - creation of a given fraction
numerator and denominator values
FRACTION input(void);-creating a fraction by values ​​entered from the keyboard
void print(FPTR); - print a fraction
int gcd(int first_dividend, int second_dividend); 
FRACTION add(FPTR, FPTR); -adding two fractions
FRACTION mult(FPTR, FPTR);-multiplication of two fractions
FRACTION divide(FPTR, FPTR);- division into two fractions
FRACTION subtract(FPTR, FPTR);-subtraction of two fractions*/
#include <stdio.h>

typedef struct
{
    int numerator;
    int denominator;
} fraction;

void readFraction(fraction *);
void writeFraction(fraction);
fraction multyplication(fraction, fraction); 
fraction divide(fraction, fraction);
fraction add(fraction, fraction);
fraction subtract(fraction, fraction);

int main()

{
    fraction a;
    readFraction(&a);
    printf("a: ");
    writeFraction(a);

    fraction b;
    readFraction(&b);
    printf("b: ");
    writeFraction(b);

    fraction c = multyplication(a, b);
    printf("a*b: ");
    writeFraction(c);

    fraction d = divide(a, b);
    printf("a/b: ");
    writeFraction(d);

    fraction e = add(a, b);
    printf("a+b: ");
    writeFraction(e);

    fraction f = subtract(a, b);
    printf("a-b: ");
    writeFraction(f);

    return 0;
}

void readFraction(fraction *FPTR)
{
    printf("enter a fraction numerator : \n");
    scanf("%d", &FPTR->numerator);
    printf("enter a fraction denominator : \n");
    scanf("%d", &FPTR->denominator);
}

void writeFraction(fraction FPTR)
{
    printf("fraction: %d/%d\n", FPTR.numerator, FPTR.denominator);
}


fraction multyplication(fraction FPTRa, fraction FPTRb) 
{

    fraction mult;

    mult.numerator = FPTRa.numerator * FPTRb.numerator;
    mult.denominator = FPTRa.denominator * FPTRb.denominator;

    return mult;
}

fraction divide(fraction FPTRa, fraction FPTRb) 
{

    fraction div;

    div.numerator = FPTRa.numerator * FPTRb.denominator;
    div.denominator = FPTRa.denominator * FPTRb.numerator;

    return div;
}
fraction add(fraction FPTRa, fraction FPTRb) 
{
    fraction sum;
    sum.numerator = (FPTRa.numerator * FPTRb.denominator) + (FPTRb.numerator * FPTRa.denominator);
    sum.denominator = FPTRa.denominator * FPTRb.denominator;
    return sum;
}

fraction subtract(fraction FPTRa, fraction FPTRb) 
{
    fraction subt;
    subt.numerator = (FPTRa.numerator * FPTRb.denominator) - (FPTRb.numerator * FPTRa.denominator);
    subt.denominator = FPTRa.denominator * FPTRb.denominator;
    return subt;
}
