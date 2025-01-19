
// print olld lldigit n even of number
#include<stdio.h>
int main()
{
  long long int  n = 123456789;
  long long int  rem = 0;
  long long int  x = n;
  long long int    y = n;
    printf("print olld number \n");
    while (x > 0)
    {
        rem = x % 10;
        if (rem % 2 != 0)
        {

            printf("%lld\t", rem);
        }

        x = x / 10;
    }
    printf("\n");

    printf("print even number \n");
    while (y > 0)
    {
        rem = y % 10;
        if (rem % 2 == 0)
        {

            printf("%lld\t", rem);
        }

        y = y / 10;
    }

    return 0;
}