#include<stdio.h>
int main()
{
    //read a number form the interval [10-30000]
    //and print each digit in morse code
    // 0: "----- ";
    // 1: ".... "
    // 2: "...- "
    // 3: "..-- "
    // 4: "..--- "
    // 5: ".---- "
    // 6: "-... "
    // 7: "--.. "
    // 8: "---.. "
    // 9: "----. "
    int num,tmp;
    printf("Enter a number in the range 10-30 000:\n");
    scanf("%d",&num);
    if(num!=10)
        {
            for (tmp = 1; tmp <= num; tmp *= 10);
            do
            {
                tmp /= 10;
                int rnd = num/tmp;
                //if we are printing each digit frecuency
                switch (rnd)
                {
                    case 0:
                        printf("----- ");
                        break;
                    case 1:
                        printf(".... ");
                        break;  
                    case 2:
                        printf("...- ");
                        break;
                    case 3:
                        printf("..-- ");
                        break;
                    case 4:
                        printf("..--- ");
                        break;
                    case 5:
                    printf(".---- ");
                        break;
                    case 6:
                        printf("-... ");
                        break;
                    case 7:
                    printf("--.. ");
                        break;
                    case 8:
                        printf("---.. ");
                        break;
                    case 9:
                        printf("----. ");
                        break;    
                }
                num %= tmp;

            } while (num!=0);
        }
        else if (num==10)
        {
            printf(".... ----- ");
        }
    return 0;    
            
}    
