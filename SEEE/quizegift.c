#include <stdio.h>
int main()
{
    int science, math, passing = 33;
    printf("enter the marks of science =\n");
    scanf("%i", &science);

    printf("enter the marks of math =\n");
    scanf("%i", &math);
    if ((science >= passing) && (math >= passing))
    {
        printf("you have got 45 points");
    }
    else if (science >= passing)
    {
        printf("you have got 15 points\n");
    }
    else if (math >= passing)
    {
        printf("you have got 15 points\n");
    }
    else
    {

        printf("failed both exam");
    }
    return 0;
}