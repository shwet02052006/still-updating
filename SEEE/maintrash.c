// #include <stdio.h>
// int main()
// {
//     char c;
//     printf("Enter the value\n");
//     scanf("%c", &c);
//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
//     {

//         printf(" %c  is not symbol ", c);
//     }
//     else
//     {
//         printf(" %c  is  symbol ", c);
//     }
//     return 0;
// }

// #include <stdio.h>
// float fact(int n)
// {

//     int f = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         f = f * i;
//     }
//     return f;
// }

// int main()
// {
//     float sum = 0;
//     for (int i = 1; i <= 3; i++)
//     {

//         sum = sum + (i / fact(i));
//     }
//     printf("%f", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int i = 11; i > 0; i--)
//     {

//         for (int j = i; j > 0; j--)
//         {
//             if (i % 2 != 0)
//                 printf("*\t");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i,j;
//     for(i=6;i>=1;i--){
//         for(j=1;j<=(2*i-1);j++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c = 'c';
//     // printf("%c", c);
//     if (c >= 'a' && c <= 'z')
//     {
//         printf("Alpbhabet %c is lowercase", c);
//     }
//     else
//     {
//         printf("Alpbhabet %c is not lowercase", c);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c = '*';

//     if (c >= '!' && c <= '@')
//     {
//         printf("symbol  %c ", c);
//     }
//     else
//     {
//         printf(" %c is not symbol ", c);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int f1 = 0, f2 = 1, f3;
//     int n = 5;
//     printf("%d\t%d\t ", f1, f2);

//     for (int i = 0; i <= n - 2; i++)
//     {
//         f3 = f1 + f2;
//         f1 = f2;
//         f2 = f3;

//         printf("%d\t", f3);
//     }

//     return 0;
// }

// #include <stdio.h>
// int power(int x, int y)
// {
//      int mul=1;
//     for (int i = 1; i <= y; i++)
//     {
//         mul=x*mul;

//     }
//     return mul;
// }
// int main()
// {
// printf("%d",power(2,4));
//     return 0;
// }

// #include <stdio.h>

// void callByValue(int num) {
//     num = num + 10; // Modify the copy
//     printf("Inside callByValue: %d\n", num);
// }
// void callByReference(int *num) {
//     *num = *num + 10; // Modify the value at the address
//     printf("Inside callByReference: %d\n", *num);
// }
// int main() {
//     int a = 5;
//     printf("Before callByValue: %d\n", a);
//     callByValue(a); // Pass by value
//     printf("After callByValue: %d\n", a); // Original value remains unchanged
//     int b = 5;
//     printf("Before callByReference: %d\n", b);
//     callByReference(&b); // Pass address of the variable
//     printf("After callByReference: %d\n", b); // Original value is changed
//     return 0;
// }
