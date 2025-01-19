#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int low = 0, high = 9;
    int mid = 0;
    int n = 10;

    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == n)
        {
            printf("number %d found at pos %d", n, mid + 1);
        }
        if (arr[mid] > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
}