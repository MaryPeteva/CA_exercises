#include<stdio.h>
int main()
{
    //print "Input marks of five subjects:"
    //read with for loop 5 grades
    //sum up grades and print final grade
    // if percentage >= 90% : Grade A
    // If percentage >= 80% : Grade B
    // If percentage >= 70% : Grade C
    // If percentage >= 60% : Grade D
    // If percentage >= 40% : Grade E
    // If percentage < 40% : Grade F
    printf("Input marks of five subjects:");
    double grade;
    double gradeSum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf",&grade);
        gradeSum+=grade;
    }

    gradeSum = (gradeSum/5);

    if(gradeSum>=90)
    {
        printf("Grade A\n");
    }
    else if(gradeSum>=80)
    {
        printf("Grade B\n");
    }
    else if(gradeSum>=70)
    {
        printf("Grade C\n");
    }
    else if(gradeSum>=60)
    {
        printf("Grade D\n");
    }
    else if(gradeSum>=40)
    {
        printf("Grade E\n");
    }
    else if(gradeSum<40)
    {
        printf("Grade F\n");
    }

    return 0;
}