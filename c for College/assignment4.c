#include <stdio.h>

void summ(int arr[3][3], int arr1[3][3], int result[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = arr[i][j] + arr1[i][j];
        }
    }
}

void printMatrix(int matrix[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3], arr1[3][3], result[3][3];


    printf("ENTER THE MATRIX ELEMENTS OF MATRIX 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    printf("ENTER THE MATRIX ELEMENTS OF MATRIX 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }


    summ(arr, arr1, result);

    printf("THE RESULTANT MATRIX IS:\n");
    printMatrix(result);

    return 0;
}
