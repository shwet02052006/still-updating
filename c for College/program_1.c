#include <stdio.h>
int main()
{
    int per;
    printf("Enter your percentage :\n");
    scanf("%d", &per);
    if (per > 100)
    {
        printf("RESULT :ERROR\n");
    }
    else if (per >= 75)
    {
        printf("RESULT: Distinction\n");
    }
    else if (per >= 60)
    {
        printf("RESULT:first class \n ");
    }
    else if (per >= 50)
    {
        printf("RESULT:second class \n");
    }
    else
    {

        printf("RESULT:pass without class\n");
    }
    return 0;
}
