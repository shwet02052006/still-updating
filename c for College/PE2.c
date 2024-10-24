#include <stdio.h>
int main()
{
    int f1 = 1, f2 = 2, f3, sum = 0;
    printf("%d \t%d", f1, f2);
    printf("\t");
    for (int i = 1; i <= 30; i++)
    {
        f3 = f1 + f2;

        printf("fib=%d\ti=%d\t", f3, i + 2);
        f1 = f2;
        f2 = f3;
        if (f3 % 2 == 0)
        {

            sum = f3 + sum;
        }
    }

    printf("sum =%d", sum);
    return 0;
}