#include <stdio.h>
int main()
{
    int sum = 0, num = 55;
    while (num != 0)
    {

        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("%d", sum);
    return 0;
}