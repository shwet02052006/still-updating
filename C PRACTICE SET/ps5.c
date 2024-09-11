// 2. Write a function to convert Celsius temperature into Fahrenheit.
//  float c2f(float c);
//  float c2f(float c){

//     return ((c*9.0)/5.0)+32;
// }
// #include<stdio.h>
// int main(){
//     float c;
//     printf("Enter the temperature in celsius \n");
//     scanf("%f",&c);
//     printf("Temperature in fahrenheit = %f \n",c2f(c));
//     return 0;
// }
// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2.

// float weight(float m);
// float weight(float m)
// {

//     return 9.8 * m;
// }
// #include <stdio.h>
// int main()
// {
//     float mass;

//     printf("enter the mass of an body in KG \n ");
//     scanf("%f", &mass);
//     printf("weight of the body or force of attraction by g  = %f N \n", weight(mass));

//     return 0;
// }
//4. Write a program using recursion to calculate nth element of Fibonacci series.

// #include <stdio.h>
// int fib(int);
// int fib(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n-1;
//     }
//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
// int n=7;
// printf("element at position %d is %d",n,fib(n));
//     return 0;
// }
// 5. What will the following line produce in a C program: 
// #include<stdio.h>
// int main(){
//     int a = 4; 
// printf("%d %d %d \n", a, ++a, a++);

//     return 0;
// }
// o/p of above program is depend on evalution order of compiler it maybe 4,5,4 or 6,6,4 both are correct 
//6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
