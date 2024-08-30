// #include <stdio.h>
// #define MAX 100

// void findminmax(int *arr, int size, int *min, int *max) {
//     if (size <= 0) {
//         return;
//     }

//     *min = *max = *arr; // Initialize min and max with the first element of the array

//     for (int i = 1; i < size; i++) {
//         if (*(arr + i) > *max) {
//             *max = *(arr + i); // Update max if current element is greater
//         }
//         if (*(arr + i) < *min) {
//             *min = *(arr + i); // Update min if current element is smaller
//         }
//     }
// }

// int main() {
//     int a[MAX] = {};
//     int n;

//     printf("Enter the Number of Elements Present in the array (max %d): ", MAX);
//     scanf("%d", &n);

//     if (n > MAX) {
//         printf("Invalid array size\n");
//         return 1; // Exit the program if the size is invalid
//     }

//     printf("Enter the elements present in the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     printf("Array which we are using:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\t", a[i]);
//     }
//     printf("\n");

//     int min, max;
//     findminmax(a, n, &min, &max);

//     printf("MIN: %d\n", min);
//     printf("MAX: %d\n", max);

//     return 0;
// }
