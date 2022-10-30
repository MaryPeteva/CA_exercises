#include"task13H.h"

int main()
{
    int size = 0;
    printf("Enter a size for the stack:\n");
    scanf("%d", &size);
    fillStack(size);

    int searchedElem = 0;
    int newValue = 0;
    printf("Enter index of searched element:\n");
    scanf("%d", &searchedElem);
    printf("Enter new value for %d element:\n", searchedElem);
    scanf("%d", &newValue);
    changeNthElement(searchedElem, newValue, size);

    display();
    
    return 0;
}

