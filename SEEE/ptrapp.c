#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int arr[MAX_SIZE];
    int largest, smallest;

    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Number of elements exceeds the maximum allowed size of %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
