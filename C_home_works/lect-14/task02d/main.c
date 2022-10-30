#include"header02.h"
int main()
{
    
    int len = 0;
    printf("Enter a number of member you want in the list:\n");
    scanf("%d", &len);
    int i = 0;
    int val = 0;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(val);
    }

    display();
    int searchedX = 0;
    int newT = 0;
    printf("Enter a value you want to put the new node before:\n");
    scanf("%d", &searchedX);
    printf("Enter the new value:\n");
    scanf("%d", &newT);
    insertNewNode(searchedX, newT);
    display();
}