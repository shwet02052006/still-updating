#include <stdio.h>
int main()
{
    long long num = 600851475143;
    long long i=0;
    while (num % 2 == 0)
    {

        num = num / 2;
    }
    for (i = 3; i <= num; i += 2)
    {
        while (num % i == 0)
        {
            num=num/i;
        }
    }
    printf("%lld",(i-2));
    return 0;
}