#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int k = 0;
    while (k < 3)
    {
        printf("Enter size:\n");
        scanf("%d", &size);
        int *nums = malloc(sizeof(int*)*size);
        int i = 0;
        for (i = 0; i < size; i++)
        {
            printf("Enter number:\n");
            scanf("%d", &nums[i]);
        }
        
        for (int j = 0; j < size; j++)
        {
            printf("%d ",nums[j]);
        }
        printf("\n");
        k++;
        free(nums);
    }
    
    return 0;

}