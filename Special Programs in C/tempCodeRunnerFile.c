#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter the value n(number of rows): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // #pattern no.01

    {

        for (j = 1; j <= i; j++)
        {

            printf("%d\t", j);
        }

        printf("\n");
    }

    return 0;
}