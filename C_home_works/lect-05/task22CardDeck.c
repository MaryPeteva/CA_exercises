#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    //52-card deck has suits:clubs,diamonds,hearts and spades
    //52-card deck ranks 13:2,3,4,5,6,7,8,9,10,Jack,Queen,King,Ace(the increasing order)
    //read a number from[1-52] and print the card that represents it and the higherones than it
    int num,count;
    printf("Enter a number in the range 1-52:\n");
    scanf("%d",&num);
    char *rank[] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"};
    char *suit[] = {"Clubs","Diamonds","Hearts","Spades"};
    num-=1;
    for (int i = num; i < 52; i++)
    {
            int ranK = ceil(i/4);
            int suiT = i%4;
            printf("%s of %s,",rank[ranK],suit[suiT]);
    }
    
    return 0;
}
