#include <stdio.h>  
// this code is About voting 
int main()
{
    int age;
    printf("enter your age: \n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote \n");
    }
    else
    {
        printf("you cannot vote \n");
    }

    return 0;
}