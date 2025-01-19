#include <stdio.h>
#include <math.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Print a new line after the array
}
int main()
{
    int r1, r2;
    int isprime;
    printf("Enter the range :\n");
    scanf("%d %d", &r1, &r2);
    int ap[10000];
    int odd[10000];
    int even[10000];
    int countp=0,counto=0,counte=0;

    while (r1 <= r2)
    {
        int i = 0;
        {
            isprime = 1;
            if (r1 < 2)
            {
                isprime = 0;
            }
            else
            {

                for (int i = 2; i * i <= r1; i++)
                {
                    if (r1 % i == 0)
                    {

                        isprime = 0;
                        break;
                    }
                }
            }
            if (isprime == 1)
            {
                ap[countp++] = r1;
                //printf("%d\t", r1);
            }
            if (r1 % 2 == 0)
            {
                even[counte++] = r1;
            }
            else
            {
                odd[counto++] = r1;
            }
            r1++;
           
        }
    }
    printf("Prime numbers:\n");
    printArray(ap, countp);

    printf("Odd numbers:\n");
    printArray(odd, counto);

    printf("Even numbers:\n");
    printArray(even, counte);

    return 0;
}