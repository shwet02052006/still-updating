#include <stdio.h>
void putdata(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        printf(" %d\t", arr[j]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int odd[5], even[5];
    int j = 0, k = 0,i=0;

    for ( i ; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }
putdata(arr,i);
putdata(even,j);
putdata(odd,k);

    return 0;
}