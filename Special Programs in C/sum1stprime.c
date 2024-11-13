#include <stdio.h>
#include <math.h>
int main()
{
    long long n = 200, count = 0, num = 2;
    int j = 1;
    long long sum = 0;

    while (count < n)
    {
        int isprime = 1;

        for (long long i = 2; i <= sqrt(num); i++)
        {

            if (num % i == 0)
            {

                isprime = 0;
                break;
            }
        }

        if (isprime == 1)
        {

            count++;
            sum = sum + num;
        }

        num++;
    }
    printf("sum=%lld", sum);
    return 0;
}
