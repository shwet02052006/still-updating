

//================================================================================================================================================================>
// Basic understanding of Arrays

// #include <stdio.h>
// int main()
// {

//     int num[] = {};
//     int i;
//     for ( i = 0; i < 5; i++)

//     {

//        printf("index(location): %i | element(value): %i \n",i,num[i]);
//     }

//     return 0;
// }

//================================================================================================================================================================>
// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size of an Array\n");
//     scanf("%d", &size);

//     int num[size];

//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the Value in Element in  index %d \n", i);
//         scanf("%d", &num[i]);
//     }
//     printf("\nArray elements:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("index(location): %d | element(value): %d\n", i, num[i]);
//     }

//     return 0;
// }

//================================================================================================================================================================>

// 2D Array

// #include <stdio.h>
// int main()
// {
//     int num[3][3] = {{1, 2, 3}, {4, 5,6}};
//     printf("Print  2D array |: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("\t%d", num[i][j]);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// 3D array

// #include <stdio.h>
// int main()
// {
//     int num[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 9, 10}}, {{1, 2, 3}, {4, 5, 6}, {7, 9, 10}},{{1, 2, 3}, {4, 5, 6}, {7, 9, 10}}};
//     printf("Print  3D array |: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {

//             for (int z = 0; z < 3; z++)
//             {

//                 {
//                     printf("\t%d ", num[i][j][z]);
//                 } 
//             }
//         }

//        printf("\n");
//     }

//     return 0;
// }