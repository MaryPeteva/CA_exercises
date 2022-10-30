#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int x;
    int y;
    int z;
    struct queue* next;
}queue;
queue *head = NULL; 
queue *tail = NULL;

void mix(int arr[], int sum);
void addToQueue(int , int , int);
void display(queue* q);


int main()
{
    int arr[2];
    for (int i = 0; i <= 2; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &arr[i]);
    }

    printf("Enter a num for sum:\n");
    int sum = 0;
    scanf("%d", &sum);
    mix(arr, sum);
}

void mix(int arr[], int sum)
{
    int i = 0;
    int j = 0; 
    int k = 0;
    int x = arr[0];
    int y = arr[1];
    int z = arr[2];
    for ( i = 0; i < x+1; i++)
    {
        for (j = 0; j < y+1; j++)
        {
            for (k = 0; k < z+1; k++)
            {
                if((x + y + z) != sum)
                {
                    addToQueue(x,y,z);
                }
            }
            
        }
        
    }
    
}

void addToQueue(int x, int y, int z)
{
    queue* q = (queue*)malloc(sizeof(queue));
    q->x = x;
    q->y = y;
    q->z = z;
    q->next = NULL;

    if(head == NULL)
    {
        head = q;
        tail = q;
    }
    else
    {
        tail->next = q;
        tail = q;
    }
}

void display(queue* q)
{
   queue *temp;    
    temp = head;         
    do
    {
        if(temp->next==NULL)
        {
            printf(" %d %d %d", temp->x,temp->y,temp->z);
        }
        else
        {
            printf(" %d %d %d", temp->x,temp->y,temp->z);
        }
        temp = temp->next;        
        printf("\n");   
    }while(temp != NULL);
    printf("\n");
    
}