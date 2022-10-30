#include"header04.h"

int main()
{
    node* listL;
    node* listM;
    int len = 0;
    printf("Enter a number of member you want in the L list:\n");
    scanf("%d", &len);
    int i = 0;
    int val = 0;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(listL,val);
    }
    display(listL);
    printf("Enter a number of member you want in the M list:\n");
    scanf("%d", &len);
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;
        insert(listM,val);
    }
    display(listM);
}