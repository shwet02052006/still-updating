#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of Elements:\n");
    scanf("%d", &n);

    printf("Enter the elements :\n");
    int number[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    int min = number[0];
    int max = number[0];
    for (int i = 0; i < n; i++)
    {
        if (min > number[i])
        {

            min = number[i];
        }
        if (max < number[i])
        {

            max = number[i];
        }
    }
    printf("min= %d and max =%d ", min, max);
    return 0;
}
