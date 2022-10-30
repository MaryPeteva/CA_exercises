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
    int num,tmp,i,countOne=0,countZero=0,countTwo=0;
    scanf("%d",&num);
    i=num;
    for (tmp = 1; tmp <= num; tmp *= 10);
    do
    {
        tmp /= 10;
        int rnd = num/tmp;
        //if we are printing each digit frecuency
        switch (rnd)
        {
            case 0:
            case 4:
            case 5:
            case 6:
              countOne++;
                break;
            case 1:
              countTwo++;
                break;  
            case 2:
            case 3:
            case 7:
            case 8:
            case 9:
              countZero++;
                break;          
        }
        num %= tmp;

    } while (num!=0);
    printf("In the number %d we have:\n%d times 0\n%d times 1\n%d times 2\n",i,countZero,countOne,countTwo);

    return 0;
}