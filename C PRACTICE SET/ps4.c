// CHAPTER 4 – PRACTICE SET  
// 1. Write a program to print multiplication table of a given number n. 
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number for its table:\n");
//     scanf("%d", &n);
//     printf("The table of %d is:\n", n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d * %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }
// 2. Write a program to print multiplication table of 10 in reversed order. 

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the number for its table:\n");
//     scanf("%d", &n);
//     printf("The table of %d in reverse order is:\n", n);
//     for (int i = 10; i >= 1; i--)
//     {

//         printf("%d * %d = %d\n", n, i, n * i);
//     }

//     return 0;
// }
// 3. A do while loop is executed: 
// a. At least once. correct 
// b. At least twice. 
// c. At most once.  
// 4. What can be done using one type of loop can also be done using the other two 
// types of loops – true or false? 
// 5. Write a program to sum first ten natural numbers using while loop.

// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 
// #include<stdio.h>
//  int main(){
//      int n ,s;
//      printf("enter the natural number to find sum upto it :\n");
//      scanf("%d",&n);
//    s= (n * (n + 1)) / 2 ;
//      printf("sum of natural numbers upto %d is %d\n",n,s);
//      return 0;
//  }
// #include <stdio.h>
// int main()
// {
//     int n, s = 0, i = 1;
//     printf("enter the natural number to find sum upto it :\n");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         s = (n * (n + 1)) / 2;
//         i++;
//     }
//     printf("sum of natural numbers upto %d is %d\n", n, s);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, s = 0, i = 1;
//     printf("enter the natural number to find sum upto it :\n");
//     scanf("%d", &n);
//     do
//     {
//         s = (n * (n + 1)) / 2;
//         i++;
//     } while (i <= n);
//     printf("sum of natural numbers upto %d is %d\n", n, s);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n, s = 0, i = 1;
//     printf("enter the natural number to find sum upto it :\n");
//     scanf("%d", &n);
//     for (i; i <= n; i++)
//     {
//         s = (n * (n + 1)) / 2;
//     }
//     printf("sum of natural numbers upto %d is %d\n", n, s);
//     return 0;
// }
// 7. Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 8. (consider 8 x 1 to 8 x 10). 
//#include <stdio.h>
// int main()
// {
//     int n, s = 0, i = 1;
//     printf("enter the natural number to find sum upto it :\n");
//     scanf("%d", &n);
//     for (i; i <= 10; i++)
//     {
//         s+= i*n;//s=s+i*n
//     }
//     printf("sum of table of n  %d is %d\n", n, s);
//     return 0;
// }
// 8. Write a program to calculate the factorial of a given number using a for loop. 
// #include<stdio.h>
// int main(){
//     int n ,p=1,i=1;
//     printf("enter the value of n for factorial:\n");
//     scanf("%d",&n);
//     for(i;i<=n;i++){
//         p*=i;
//     }
//     printf("factorial of %d is %d",n,p);
//     return 0;
// }

// 9. Repeat 8 using while loop.

// #include<stdio.h>
// int main(){
//     int n ,p=1,i=1;
//      printf("enter the value of n for factorial:\n");
//      scanf("%d",&n);
//      while(i<=n){
//         p*=i;
//         i++;

//      }
//       printf("factorial of %d is %d",n,p);
//     return 0;
// } 
// 10. Write a program to check whether a given number is prime or not using loops.
//#include <stdio.h>

// int main()
// {
//     int n ;
//     int not_prime = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n == 0 || n == 1)
//     {
//         not_prime = 1;
//     }
//     else
//     {

//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 not_prime = 1;
//                 break;
//             }
//         }
//     }
//     if (not_prime)
//     {
//         printf("%d is not prime\n", n);
//     }
//     else
//     {
//         printf("%d is prime\n", n);
//     }

//     return 0;
// } 
// 11. Implement 10 using other types of loops. 