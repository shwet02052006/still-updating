#include <stdio.h>
int main()
{
    int n, x, rev = 0;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {

        rev = (rev * 10) + n % 10;
        n = n / 10;
    }

    if (rev == x)
    {

        printf("The number is palindrom ");
    }
    else
    {

        printf("The number is not palindrom ");
    }
    return 0;
}