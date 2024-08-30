#include <stdio.h>
#define MAX 100
int main()
{
    int n, arr[MAX], largest, smallest;
    printf("Enter the Element of an array max (%d):\n", MAX); // checking and entering the size of array
    scanf("%d", &n);
    if (n > MAX)
    {

        printf("It Exceeds the array value (INVALID)\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter the element of an arrray at index : %d =\t", i);
        scanf("%d", &arr[i]);
    }

    return 0;
}