#include"test02H.h"

int main()
{
    int size;
    int value;
    struct stack *firstStack = init();
    
    printf("Enter size for the first stack : ");
    scanf("%d",&size);

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter number : ");
        scanf("%d",&value);
        push(firstStack,value);
    }
 
    stack *secondStack = init();
    printf("Enter n for second stack : ");
    scanf("%d",&size);

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter number : ");
        scanf("%d",&value);
        push(secondStack,value);
    }
 
    display(firstStack);
    display(secondStack);
 
 
}