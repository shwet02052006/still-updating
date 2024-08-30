#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of whihc you want table");
    scanf("%d", &n);
    for (i = 0; i <= 10; i++)
    {

        int mul = n * i;
        printf("%d x %d = %d \n", n,i,mul);
    }
}