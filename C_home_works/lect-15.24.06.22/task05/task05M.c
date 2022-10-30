/*
5. Мажорант на масив от N елемента е стойност, която се среща поне N/2+1
пъти. Напишете програма, която по даден масив от числа намира мажоранта на
масива и го отпечатва. Ако мажоранта не съществува – отпечатва "The majorant
does not exists!”.
Пример: {2, 2, 3, 3, 2, 3, 4, 3, 3}
3 
*/
#include "task05H.h"

int main()
{
    int arr[9] ={2, 2, 3, 3, 2, 2, 4, 2, 3};
    bubbleSort(arr, 9);
    int num = majorNumber(arr, 9);
    if (is_numMajar(arr, num, 9))
    {
       printf("%d is major", num);
    }else
    {
        printf("%d not major", num);
    }
    
}


