/*Task 10*. hw - to be completed in detail Introduce the employees
in a company in a structure with members: serial number, first name, last name,
surname, position, work experience in years, salary in BGN, directory to
the structure describing its superintendent. Write a program that
enters 10 employees, which are stored in an array of described
structures. The introduction of employees can be done in two passes,
first entering all data without the pointer to the parent and to
second pass, telling each employee who their boss is.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define arrSize 100

typedef struct Worker
{
    int iIdNumber;
    char chFirstName[arrSize];
    char chSureName[arrSize];
    char chLastName[arrSize];
    char chPosition[arrSize];
    float fWorkExperience;
    float dSalary;
    struct Worker *manager;
}Worker;

void readWorker(Worker*);

int main()
{
    Worker workerArr[10];

    for (int i = 0; i < 10; i++)
    {
        Worker* pntrWorker = &workerArr[i];
        readWorker(pntrWorker);
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("ID: %d\n", workerArr[i].iIdNumber);
        printf("Name: %s\n", workerArr[i].chFirstName);
        printf("Surname: %s\n", workerArr[i].chSureName);
        printf("Lastname: %s\n", workerArr[i].chLastName);
        printf("Position: %s\n", workerArr[i].chPosition);
        printf("Work experience: %.2f\n", workerArr[i].fWorkExperience);
        printf("Salary: %.2f\n", workerArr[i].dSalary);
        printf("Manager ID: %d\n", workerArr[i].manager->iIdNumber);
        /*??????????linki manager-a?????????*/
    }
    
}
void readWorker(Worker* pntr)
{
    printf("Enter employee ID:\n");
    scanf("%d", &pntr->iIdNumber);
    printf("Enter first name:\n");
    scanf("%s", pntr->chFirstName);
    printf("Enter sure name:\n");
    scanf("%s", pntr->chSureName);
    printf("Enter last name:\n");
    scanf("%s",pntr->chLastName);
    printf("Enter employee position;\n");
    scanf("%s", pntr->chPosition);
    printf("Enter work experience:\n");
    scanf("%f",&pntr->fWorkExperience);
    printf("Enter salary:\n");
    scanf("%f", &pntr->dSalary);
    pntr->manager->iIdNumber = 001;
    // printf("Enter managers Name:\n");
    // scanf("%s %s", pntr->manager->chFirstName, pntr->manager->chLastName);
}