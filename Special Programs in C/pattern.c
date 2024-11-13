// #include <stdio.h>
// int main()
// {
//     int n, i, j, k;
//     printf("Enter the value n(number of rows): ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)

//     {

//         for (j = 1; j <= i; j++)
//         {

//             printf("%d\t", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// 1
// 1       2
// 1       2       3
// 1       2       3       4
// 1       2       3       4       5
// #include <stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter the value n(number of rows and column at once ): ");
//     scanf("%d", &n);
//     n=n/2;

//     for (i = 1; i <= n; i++)
//     {
//         for (int z = n; z>= i; z--)
//         {

//             printf("*\t");
//         }
//         printf("\n");
//     }
//     for (i = 2; i <= n; i++)
//     {

//         for (j = 1; j <= i; j++)
//         {

//             printf("*\t");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *       *       *       *       *
// *       *       *       *
// *       *       *
// *       *
// *
// *
// *       *
// *       *       *
// *       *       *       *
// *       *       *       *       *

// #include <stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter the value n(number of rows): ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if ((i) % 2 == 0)
//             {

//                 printf("*\t");
//             }
//             else
//             {

//                 printf("$\t");
//             }

//         }printf("\n");
//     }

//     return 0;
// }
// $
// *       *
// $       $       $
// *       *       *       *
// $       $       $       $       $
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value n(number of rows): ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {

//             if ((i + j) % 2 == 0)
//             {

//                 printf("1\t");
//             }
//             else
//             {
//                 printf("0\t");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1
// 0       1
// 1       0       1
// 0       1       0       1
// 1       0       1       0       1
// 0       1       0       1       0       1

// #include <stdio.h>
// int main()
// {
//     int n, i, j, k;
//     printf("Enter the value n(number of rows): ");
//     scanf("%d", &n);
//     for (i = n; i >0; i--)

//     {

//         for (j =i ; j > 0; j--)
//         {

//             printf("*\t");
//         }

//         printf("\n");
//     }

//     return 0;
// }
// *       *       *       *       *
// *       *       *       *
// *       *       *
// *       *
// *