// #include <stdio.h>
// int main()
// {
//     int num = 0, n, count = 0, sum = 0;
//     printf("Enter the nth term:");
//     scanf("%d", &n);
//     while (count < n)
//     {

//         if (num % 2 != 0)
//         {
//             sum += num;
//             count++;
//         }
//         num++;
//     }
//     printf("sum=%d", sum);
// return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int num = 1, n, count = 0, sum = 0;
//     printf("Enter the nth term:");
//     scanf("%d", &n);
//     while (count < n)
//     {
//         int odd = 1;

//         for (int i = 1; i <= num; i++)
//         {
//             if (num % 2 == 0)
//             {

//                 odd = 0;
//                 break;
//             }
//         }

//         if (odd == 1)
//         {
//             sum = num + sum;
//             count++;
//         }
//         num++;
//     }
//     printf("sum=%d", sum);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int count = 0, sum = 0;
    for (int i = 1; count < 50; i++)
    {

        if (i % 2 != 0)
        {
            sum = sum + i;
            count++;
        }
        
    }

    printf("sum=%d", sum);
    return 0;
}