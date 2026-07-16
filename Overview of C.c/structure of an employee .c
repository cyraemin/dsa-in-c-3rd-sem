//2.	Define the structure of an employee with members Name, Age, and Salary. Write a program in C to create an array of such employee records and display details of employee with highest salary.
#include <stdio.h>

struct Employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    int n, i, max = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        if (emp[i].salary > emp[max].salary)
            max = i;
    }

    printf("\nEmployee with Highest Salary\n");
    printf("Name: %s\n", emp[max].name);
    printf("Age: %d\n", emp[max].age);
    printf("Salary: %.2f\n", emp[max].salary);

    return 0;
  }