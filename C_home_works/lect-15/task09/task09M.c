/*
9. Една крайна редица от цели числа се нарича зигзаг, ако всеки елемент на редицата (без
първия и последния) е или по-голям от двата му съседа или по-малък от двата съседни
елемента. Да се напише функция, която по зададен масив от цели числа, определя дали
редицата, образувана от тези числа е зигзаг.
Вход. На стандартния вход се задават числови редици – всяка на отделен ред с разделител
един интервал между числата.
Ограничения. Всички числа се представят в типа int
Изход. За всяка редица се извежда на отделен ред yes за зигзаг и no – за редица, която не е
зигзаг
*/

#include"task09H.h" 
 
int main()
{
    int arr[5] = {1, 9, 4, 6, 5};
 
    is_zigZag(arr , 5)  ?   printf("yes") : printf("no");
 
    return 0;
}

