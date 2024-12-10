#include <stdio.h>

int main()
{
    int matrix[3][3];
    int upper[3][3]={0}, lower[3][3]={0};

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (i <= j)
            {

                upper[i][j] = matrix[i][j];
                
            }
           if(j<=i)
            {

                lower[i][j] = matrix[i][j];
               
            }
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", upper[i][j]);
        }
        printf("\n");
    }

    printf("\nLower Triangular Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", lower[i][j]);
        }
        printf("\n");
    }

    return 0;
}
