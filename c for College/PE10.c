// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     long long n = 2000000, count = 0, num = 2;
//     int j = 1;
//     long long sum = 0;

//     while (count < n)
//     {
//         int isprime = 1;

//         for (long long i = 2; i < sqrt(num); i++)
//         {

//             if (num % i == 0)
//             {

//                 isprime = 0;
//                 break;
//             }
//         }

//         if (isprime == 1)
//         {

//             count++;
//             sum = sum + num;
//         }

//         num++;
//     }
//     printf("sum=%lld", sum);
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main()
{
    long long limit = 2000000;
    long long sum = 0;
    long long num = 2;

    while (num < limit)
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
            sum += num;
        }

        num++;
    }

    printf("Sum of primes below 2,000,000 = %lld\n", sum);
    return 0;
}
