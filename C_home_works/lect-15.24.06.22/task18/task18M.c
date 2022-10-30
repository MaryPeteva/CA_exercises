/*
18. Функция на Акерман се дефинира чрез две цели стойности M и N,
както следва:
Akerman(0, N) = N+1
Akerman(M, 0) = Akerman(M-1, 1)
Akerman(M, N) = Akerman(M-1, Akerman(M, N-1))
Напишете рекурсивна и итеративна функция за изчисляване на
функцията на Акерман по зададени две стойности за M и N.*/

#include"task18H.h"

int main()
{
    int A = 0;
    int m = 0;
    int n = 0;
    printf("Enter value for m:\n");
    scanf("%d", &m);
    printf("Enter value for n:\n");
    scanf("%d", &n);

    A = ackermanFunc(m,n);
    printf("%d", A);
    return 0;
}