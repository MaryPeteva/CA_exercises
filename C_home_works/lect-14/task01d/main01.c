#include"header01.h"

int main()
{
    //init the original list and the two list we want to create
    node originList;
    node oddList;
    node evenList;
    //ask for lenght of the original list
    int originLen = 0;
    printf("Enter a number of member you want in the list:\n");
    scanf("%d", &originLen);
    int i = 0;
    int val = 0;
    for ( i = 0; i < originLen; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(&originList, val);
    }

    printf("The original list is:\n");
    display(&originList);
    sort(&originList, &evenList, &oddList, originLen);
    printf("List with even positions:\n");
    display(&evenList);
    printf("List with odd positions:\n");
    display(&oddList);
}