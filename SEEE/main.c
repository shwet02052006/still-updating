#include <stdio.h>
int palindrom(int n)
{
    int x, rev = 0;

    x = n;
    while (n > 0)
    {

        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    return rev == x;
}

int largest_pal()
{
    int a, b;
    int max_pal = 0, j, product;
    for (int i = 999; i >= 100; i--)
    {
        for (j = i; j >= 100; j--)
        {

             product = i * j;

            if (product <= max_pal)
            {

                break;
            }

            if (palindrom(product))
            {

                max_pal = product;
                a = i;
                b = j;
            }
        }
    }
    printf("The largest palindromic product is %d = %d * %d\n", max_pal, a, b);
    return max_pal;
}

int main()
{
    largest_pal();
    return 0;
}