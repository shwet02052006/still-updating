#include <stdio.h>
int fib(int);
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
int n=7;
printf("element at position %d is %d",n,fib(n));
    return 0;
}