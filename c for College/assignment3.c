
#include <stdio.h>
int main()
{
    int num = 2, n, count = 0, i;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    printf("prime number are:\n");
    while (count < n)
    {
        int isprime = 1;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {

                isprime = 0;
                break;
            }
        }
        if (isprime ==1)
        {
            ;
            printf("%d\t", num);
            count++;
        }
        num++;
    }

    return 0;
}
