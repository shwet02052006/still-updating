#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age for driving liscence :");
    scanf("%d", &age);
    if (age < 16)
    {

        printf("your not eligible");
    }
    else if (age > 60)
    {

        printf("your not eligible");
    }
    else if (age >= 18)
    {

        printf("you can drive vehicle with gear ");
    }

    else if (age < 18)
    {

        printf("you can drive vehicle without gear ");
    }
    else if (age > 16)
    {

        printf("you can drive vehicle without gear ");
    }

    return 0;
}