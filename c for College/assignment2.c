#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 31)
    {
        printf("NAGPURE\n");
    }
    else if (num == 49)
    {
        printf("NAGPURE east\n");
    }
    else if (num == 40)
    {
        printf("NAGPURE rural\n");
    }
    else
    {
        printf("error\n");
    }

    return 0;
}

