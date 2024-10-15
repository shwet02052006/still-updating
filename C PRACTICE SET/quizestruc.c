#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important
int main()
{
    struct employee e1, e2, e3; // creating a structure variable
    printf("Enter the name of employee :\n");
    scanf("%s", &e1.name);
    printf("Enter the salary :\n");
    scanf("%f", &e1.salary);
    printf("Enter the code :\n");
    scanf("%d", &e1.code);

    printf("%s ,%f,%d \n", e1.name, e1.salary, e1.code);
    printf("Enter the name of employee :\n");
    scanf("%s", &e2.name);
    printf("Enter the salary :\n");
    scanf("%f", &e2.salary);
    printf("Enter the code :\n");
    scanf("%d", &e2.code);

    printf("%s ,%f,%d \n", e2.name, e2.salary, e2.code);
    printf("Enter the name of employee :\n");
    scanf("%s", &e3.name);
    printf("Enter the salary :\n");
    scanf("%f", &e3.salary);
    printf("Enter the code :\n");
    scanf("%d", &e3.code);

    printf("%s ,%f,%d \n", e3.name, e3.salary, e3.code);

    return 0;
}