#include <stdio.h>
#define MAX 50

int main() {
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k, sum;

    printf("Enter the Rows and Columns of the Matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a:\n");
    for (i = 0; i < arows; i++) {
        for (j = 0; j < acolumns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the Rows and Columns of the Matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns) {
        printf("We cannot multiply matrix a and b\n");
    } else {
        printf("Enter the elements of matrix b:\n");
        for (i = 0; i < brows; i++) {
            for (j = 0; j < bcolumns; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        // Initialize product matrix with zeros
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                product[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                sum = 0; // Initialize sum to 0 for each element
                for (k = 0; k < brows; k++) {
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
            }
        }

        // Print the resultant matrix
        printf("Resultant matrix:\n");
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
