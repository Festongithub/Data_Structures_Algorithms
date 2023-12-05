#include <stdio.h>

/**
 * usinfg the struct tag for simplicity
*/

typedef struct employee
{
    char *name;
    int age;
    int salary;
    char *residence;
}employee;

int manager()
{
     employee manager;

    manager.age = 27;
    if (manager.age > 30)
    manager.salary = 65000;
    else
    manager.salary = 50000;
    return manager.salary;
}

int main()
{
    struct employee emp1;
    struct employee emp2;
    printf("Enter the salary of employee:");
    scanf("%d", &emp1.salary);
    printf("Enter the age  of employee 1:");
    scanf("%d", &emp1.age);
    printf("Enter the age  of employee 2:");
    scanf("%d", &emp2.age);
    printf("Enter the salary of employee:");
    scanf("%d", &emp2.salary);
    printf("Employee 1 salary is : %d\n", emp1.salary);
    printf("Employee 2 age is : %d\n", emp2.age);
    printf("Employee 1 age is : %d\n", emp1.age);
    printf("Manager salary is : %d\n", manager());
    return(0);
}
