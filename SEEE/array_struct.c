#include <stdio.h>

struct stud
{
    int roll;
    char name[100];
    float mks;
};
int main()
{
    struct stud s1[10];
    for (int i = 0; i < 5; i++)
    {
        printf("entry stud : %d\n", i + 1);
        printf("Enter your name :\n");
        fflush(stdin);
        gets(s1[i].name);
        printf("Enter your roll number :\n");
        scanf("%d", &s1[i].roll);
        printf("Enter your marks :\n");
        scanf("%f", &s1[i].mks);
        printf("\n");
    }

    printf("Displaying Student Information:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Roll Number: %d\n", s1[i].roll);
        printf("Marks: %.2f\n\n", s1[i].mks);
    }

    return 0;
}