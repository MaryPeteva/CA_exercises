#include<stdio.h>
int main()
{
    //count all the scape,tabs and new rows in a file
    char c;
    int spaceCount = 0;
    int tabCount = 0;
    int newRowCount = 0;
    while((c = getchar()) != EOF)
    {
        if(c==' ')
        {
            spaceCount++;
        }
        else if (c == '\n')
        {
            newRowCount++;
        }
        else if (c == '\t')
        {
            tabCount++;
        }
        
        
    }
    printf("Total\nspace characters:%d\ntab characters:%d\nnew rows:%d\n",spaceCount,tabCount,newRowCount);

    return 0;
}