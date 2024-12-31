// #include <stdio.h> //REVERSING AND STORING IN ANOTHER ARRAY
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int ar[5];

//     for (int i = 4,j=0; i >= 0; i--)
//     {
//         ar[j] = arr[i];
//         j++;
//     }
//     printf(" reversed printing Arrays:");
//     for (int j = 0; j <5; j++)
//     {
//        printf(" %d\t", ar[j]);

//     }

//     return 0;
// }
// TO FIND MAX IN ARRAY
// #include <stdio.h>
// int main()
// {
//     int size = 100;
//     int arr[100] = {1, 2, 3, 4, 5, 10};
//     int max = 0;
//     for (int i = 0; i < size; i++) //main logic
//     {
//         if (max < arr[i])
//         {

//             max = arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// #include <stdio.h>

// // Function to display the array
// void putdata(int arr[], int n) {
//     for (int j = 0; j < n; j++) {
//         printf(" %d\t", arr[j]);
//     }
//     printf("\n");
// }

// // Function to insert an element at a specified index
// int indinsert(int size, int index, int element, int capacity, int arr[]) {
//     // Check if there's enough capacity to insert
//     if (size >= capacity) {
//         return -1; // Return -1 if insertion fails
//     }

//     // Shift elements to the right to make space for the new element
//     for (int i = size - 1; i >= index; i--) {
//         arr[i + 1] = arr[i];
//     }

//     // Insert the new element at the specified index
//     arr[index] = element;
//     return 1; // Return 1 if insertion is successful
// }

// int main() {
//     int arr[100]; // Declare an array with a maximum capacity of 100
//     int size, index, element;

//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     // Input the elements of the array
//     printf("Enter %d elements of the array:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Input the index and element to be inserted
//     printf("Enter the index where you want to insert the element: ");
//     scanf("%d", &index);

//     printf("Enter the element to insert: ");
//     scanf("%d", &element);

//     // Perform the insertion
//     int result = indinsert(size, index, element, 100, arr);

//     // Check if insertion was successful
//     if (result == 1)
//     {
//         size++; // Increase size after successful insertion
//         printf("Array after insertion:\n");
//         putdata(arr, size); // Display the updated array
//     } else {
//         printf("Insertion failed! Not enough capacity.\n");
//     }

//     return 0;
// }
// Simple program for deletion of array

// #include <stdio.h>
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int main()
// {
//     int ar[100] = {1, 2, 3, 4, 5, 6};
//     int pos = 2;
//     for (int i = pos - 1; i < 6; i++)
//     {
//         ar[i]=ar[i+1];
//     }
//     printArray(ar, 5);
//     return 0;
// }

//  BINARY SEARCH
// #include <stdio.h>
// int main()
// {
//     int arr[] = {1, 1,2, 3, 4, 5, 6};
//     int low = 0, key = 1, high = 5, mid;
//     int flag = 0;

//     while (high >= low)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == key)
//         {
//             flag = 1;
//             printf("key is found at pos %d and at index %d", mid + 1, mid);
//             break;
//         }
//         if (arr[mid] > key)
//         {

//             high = mid - 1;
//         }
//         if (arr[mid] < key)
//         {

//             low = mid + 1;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("not found ");
//     }

//     return 0;
// }
// STORE ELEMENTS SEPTLY IN EVEN N ODD
// void putdata(int arr[], int n)
// {
//     for (int j = 0; j < n; j++)
//     {
//         printf(" %d\t", arr[j]);
//     }
//     printf("\n");
// }
// #include <stdio.h>
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int odd[10], even[10];
//     int k = 0;
//     int j = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {

//             even[j] = arr[i];
//             j++;
//         }
//         else
//         {
//             odd[k] = arr[i];
//             k++;
//         }
//     }

//     putdata(even, j);//j and i rep size of an array
//     putdata(odd, k);

//     return 0;
// }
// VALUE IP AND OP AND TRANSPOSE in MATRIX
// #include <stdio.h>
// int main()
// {
//     int arr[3][3];

//     printf("ENTER THE MATRIX ELEMENT :\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {

//             scanf("%d", &arr[i][j]);
//         }
//         printf("\n");
//     }
//         printf("PRINT THE MATRIX ELEMENT :\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d \t", arr[i][j]);
//         }
//         printf("\n");
//     }

//         printf("PRINT THE TRANSPOSE MATRIX ELEMENT :\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d \t", arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ADDITION OF MATRIXX

// #include <stdio.h>
// void summ(int arr[3][3], int arr1[3][3])// specify the dimension or we can say size of array
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d\t", arr[i][j] + arr1[i][j]);

//         }
//         printf("\n");
//     }
// }
// int main()
// {
// int arr[3][3];
// int arr1[3][3];

// printf("ENTER THE MATRIX ELEMENT of 1 :\n");
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {

//         scanf("%d", &arr[i][j]);
//     }
//     printf("\n");
// }

// printf("ENTER THE MATRIX ELEMENT  of 2 :\n");
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {

//         scanf("%d", &arr1[i][j]);
//     }
//     printf("\n");
// }
//     summ(arr, arr1);

//     return 0;
// }
// Matrix multiplication 
// #include <stdio.h>
// void putdata(int arr[3][3], int n)
// {
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             printf(" %d\t", arr[j][i]);
//         }
//          printf("\n");
//     }
  
// }
// void mul(int arr1[3][3], int arr2[3][3])
// {
//     int r[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {

//             int sum = 0;
//             for (int k = 0; k < 3; k++)
//             {
//                 sum = sum + (arr1[i][k] * arr2[k][j]);
//             }
//             r[i][j] = sum;
//         }
//     }
//     putdata(r, 3);
// }

// int main()
// {
//     int arr[3][3];
//     int arr1[3][3];
//     int r[3][3];
//     int sum = 0;

//     printf("Enter the elements of the first 3x3 matrix:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("Enter the elements of the second 3x3 matrix:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
       
//     }

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         sum = 0;
//     //         for (int k = 0; k < 3; k++)
//     //         {
//     //             sum += arr[i][k] * arr1[k][j];
//     //         }
//     //         r[i][j] = sum;
//     //     }
//     // }

//     // printf("The resultant matrix is:\n");
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         printf("%d ", r[i][j]);
//     //     }
//     //     printf("\n");
//     // }
//        mul(arr,arr1);
//     return 0;
// }
