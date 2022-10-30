#include"header04b.h"

int main()
{
    node* listL;
    node* listM;
    node* listLM;
    int len = 0;
    int totalLen = 0;
    printf("Enter a number of member you want in the L list:\n");
    scanf("%d", &len);
    totalLen += len;
    int i = 0;
    int val = 0;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;//just to be fancy fill with random numbers
        insert(&listL,val);
    }
    display(listL);

    printf("Enter a number of member you want in the M list:\n");
    scanf("%d", &len);
    totalLen += len;
    for ( i = 0; i < len; i++)
    {
        val = rand()%50;
        insert(&listM,val);
    }
    display(listM);

    printf("Concatenated lists:\n");
    listLM = concatLists(&listL, &listM, totalLen);
    display(listLM);
}