#include <stdio.h>
int main()
{
  long long  num = 10000000000, count = 0;
    do
    {
        num = num / 10;
        count++;

    } while (num > 0);
    printf("%lld",count);
    return 0;
}