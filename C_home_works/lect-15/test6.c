#include<stdio.h>
#include<stdbool.h>
bool gender(int);
bool validDate(int , int, int);
void* controlSum(int num[]);

int main()
{
    int num[9];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    
    bool isFemale = gender(num[8]);

    int year = 1900 + (num[0]*10) + num[1];
    int month = (num[2]*10) + num[3];
    int date = (num[4]*10) + num[5];
    bool isValidDate = validDate(year, month, date);

    if(isFemale && isValidDate)
    {
        controlSum(num);
    }
}

bool gender(int num)
{
    if(num % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool validDate(int year, int month, int date)
{
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(date >= 0 && date <= 31)
            {
                return true;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(date >= 0 && date <= 30)
            {
                return true;
            }
        break;
    
    case 2:
        if(date >= 0 && date <= 28)
        {
            return true;
        }
        else if (date >= 0 && date <= 29)
        {
            if(year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    break;
    }
}

void* controlSum(int num[])
{
    int sum =  (num[0]*2)+(num[1]*4)+(num[2]*8)+(num[3]*5)+(num[4]*10)+(num[5]*9)+(num[6]*7)+(num[7]*3)+(num[8]*6);
    int contrl = sum % 11;
    if(contrl == num[9])
    {
        printf("Valid");
    }
    else
    {
        printf("Error");
    }
}