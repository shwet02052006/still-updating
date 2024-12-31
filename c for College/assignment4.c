#include <stdio.h>
void putdata(int arr[3][3], int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf(" %d\t", arr[j][i]);
        }
         printf("\n");
    }
  
}
void mul(int arr1[3][3], int arr2[3][3])
{
    int r[3][3]={0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            
            for (int k = 0; k < 3; k++)
            {
                 r[i][j]= r[i][j] + (arr1[i][k] * arr2[k][j]);
            }
            
        }
    }
    putdata(r, 3);
}

int main()
{
    int arr[3][3];
    int arr1[3][3];
    int r[3][3];
    int sum = 0;

    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
       
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum = 0;
    //         for (int k = 0; k < 3; k++)
    //         {
    //             sum += arr[i][k] * arr1[k][j];
    //         }
    //         r[i][j] = sum;
    //     }
    // }

    printf("The resultant matrix is:\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", r[i][j]);
    //     }
    //     printf("\n");
    // }
mul(arr,arr1);
    return 0;
}
