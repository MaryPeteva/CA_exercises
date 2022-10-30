#include<stdio.h>
#include<stdlib.h>
int fnPlus(int nA, int nB) {return (nA+nB);}
int fnMinus(int nA, int nB) {return (nA+nB);}
int fnMultiplication(int nA, int nB) {return (nA * nB);}
double fnDivision(double nA, double nB) 
{
    printf("%lf", (nA/nB));
    return 0;
}
// div_t fnDivision(int nA, int nB)
// {
//     div_t result;
//     printf("Q: %d R: %d", result.quot, result.rem);
// }
//finish the task by adding multiplication and division
int ( *pfCalc ) (int, int) = NULL;
double ( *pfCalc2 ) (double, double) = NULL;
int main()
{
    char op;
    scanf("%c", &op);

    int a = 4;
    int b = 9;
    double c = (double)(a);
    double d = (double)(b);
    //little mods
    switch (op)
    {
        case '+':
            pfCalc = fnPlus(a, b);
            printf("%d\n", ( *pfCalc ));
        break;

        case '-':
            pfCalc = fnMinus(a, b);
            printf("%d\n", ( *pfCalc ));
        break;

        case '*':
            pfCalc = fnMultiplication(a, b);
            printf("%d\n", ( *pfCalc));
        break;

        case '/'://wtf
            
            //fnDivision(a,b);
            fnDivision(c, d);          
        break;
    
    }
}