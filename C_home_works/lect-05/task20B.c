#include<stdio.h>
int main()
{
    //Write C a program for counting the frequency of digits in a given number
    //read number,for evry digit:
    // Frequency of 0 = 1
    // Frequency of 1 = 2
    // Frequency of 2 = 0
    // Frequency of 3 = 0
    // Frequency of 4 = 1
    // Frequency of 5 = 1
    // Frequency of 6 = 1
    // Frequency of 7 = 0
    // Frequency of 8 = 0
    // Frequency of 9 = 0
    int num,tmp;
    scanf("%d",&num);
    for (tmp = 1; tmp <= num; tmp *= 10);
    do
    {
        tmp /= 10;
        int rnd = num/tmp;
        int frec;
        //if we are printing the frecuency as whole number
        switch (rnd)
        {
            case 0:
            case 4:
            case 5:
            case 6:
              frec = 1;
                break;
            case 1:
              frec = 2;
                break;  
            case 2:
            case 3:
            case 7:
            case 8:
            case 9:
              frec = 0;
                break;          
        }
        printf("%d",frec);
        num %= tmp;

    } while (num!=0);
    return 0;
}