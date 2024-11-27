#include <stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    printf("Array before insertion:\n");

    for (int j = 0; j < 5; j++)
    {
        printf(" %d\t", arr[j]);
    }
    printf("\n");
    int pos = 2;
    int ele = 90;

    for (int i = 4; i >= pos - 1; i--) 
    {

        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    printf("Array After  insertion:\n");
    for (int j = 0; j < 6; j++)
    {
        printf(" %d\t", arr[j]);
    }

    return 0;
}