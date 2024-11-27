// #include <stdio.h>

// // Function to display the array
// void putdata(int arr[], int n)
// {
//     for (int j = 0; j < n; j++)
//     {
//         printf(" %d\t", arr[j]);
//     }
//     printf("\n");
// }

// // Function to insert an element at a specified index
// int indinsert(int size, int index, int element, int capacity, int arr[])
// {
//     // Check if there's enough capacity to insert
//     if (size >= capacity)
//     {
//         return -1; // Return -1 if insertion fails
//     }

//     // Shift elements to the right to make space for the new element
//     for (int i = size - 1; i >= index; i--)
//     {
//         arr[i + 1] = arr[i];
//     }

//     // Insert the new element at the specified index
//     arr[index] = element;
//     return 1; // Return 1 if insertion is successful
// }

// int main()
// {
//     int arr[100]; // Declare an array with a maximum capacity of 100
//     int size, index, element;

//     // Input the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     // Input the elements of the array
//     printf("Enter %d elements of the array:\n", size);
//     for (int i = 0; i < size; i++)
//     {
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
//     }
//     else
//     {
//         printf("Insertion failed! Not enough capacity.\n");
//     }

//     return 0;
// }
//simple logic of program
#include <stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int ind = 2;
    int ele = 1;
    for (int i = 4; i >= ind; i--) 
    {

        arr[i + 1] = arr[i];

    }
    arr[ind]=ele;
    
    for (int j = 0; j < 6; j++)
    {
        printf(" %d\t", arr[j]);
    }
    


    return 0;
}