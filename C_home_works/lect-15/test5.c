#include<stdio.h>
typedef struct  node
{
    int value;
    int bitSum;
    struct node* next;
};


int bitcount(int num)
{

    int count = 0;
    while(num > 0)
    {

        count = count + 1;
        num = num & (num-1);
    }
    
    return count;
}
int main()
{
    int nums[10];
    int bin[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < 10; j++)
    {
    
        bin[j] = bitcount(nums[j]);
        
    }
    

}