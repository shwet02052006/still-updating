
// CHAPTER 3 – PRACTICE SET
// 1.
// What will be the output of this program int a = 10; if (a = 11) printf("I am 11"); else printf("I am not 11");
// Ans : It will print Im 11
// 2.
// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.
// #include <stdio.h>
// int main()
// {
//     int P, C, M, pc;
//     printf("Enter the marks in P sub:\n");
//     scanf("%i", &P);

//     printf("Enter the marks in C sub:\n");
//     scanf("%i", &C);

//     printf("Enter the marks in M sub:\n");
//     scanf("%i", &M);
//     printf("Marks P:%i \t C:%i \t M:%i \n", P, C, M);
//     pc = ((P + C + M) / 3);
//     if (P < 33 || C < 33 || M < 33)
//     {

//         printf("Failed in subject \n");
//     }

//     else if (pc > 40)
//     {
//         printf("You have passed Exam \n");
//     }
//     else
//     {
//         printf("you have less than 40 pc hence failed \n");
//     }
//     return 0;
// }
// 3.
// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
// Income Slab Tax
// 2.5 – 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.
// // Income Slab Tax
// 2.5 – 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%

// #include <stdio.h>
// int main()
// {
//     float income, tax=0;
//     printf("Enter your income :\n");
//     scanf("%f", &income);
//     if (income <= 250000)
//     {
//         tax = 0;
//     }
//     else if (income >= 250000 && income <= 500000)
//     {

//         tax = 0.05 * (income - 250000);
//     }
//     else if (income >= 500000 && income <= 1000000)
//     {
//     }
//     else
//     {
//         tax = (0.2 * (income - 500000)) + 0.05 * (income - 250000) + 0.3 * (income - 1000000);
//     }

//     printf("TAX you have to pay on income : %f is %f", income, tax);

//     return 0;
// }
// 4.
// Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
//#include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter the year :\n");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//     {

//         printf("The Year is leap year ");
//     }
//     else
//     {
//         printf("The Year is not leap year ");
//     }
//     return 0;
// }
// 5.
// Write a program to determine whether a character entered by the user is lowercase or not.
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character: \n");
//     scanf("%c",&ch);
//     printf("character:%c\n",ch);
//     printf("value of character:%i\n",ch);
//     if(ch>=97&&ch<=122){
//         printf("The char is lowercase\n");
//     }
//     else{
//         printf("The character is not lowercase");
//     }
//     return 0;
// }
// 6.
// Write a program to find greatest of four numbers entered by the user.
// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     printf("Enter the value of a :\n");
//     scanf("%i", &a);
//     printf("Enter the value of b :\n");
//     scanf("%i", &b);
//     printf("Enter the value of c :\n");
//     scanf("%i", &c);
//     printf("Enter the value of d :\n");
//     scanf("%i", &d);
//     if (a > b && a > c && a > d)
//     {
//         printf("a is greatest \n");
//     }
//     else if (b > a && b > c && b > d)
//     {
//         printf("b is greatest \n");
//     }
//     else if (c > b && a < c && c > d)
//     {
//         printf("c is greatest \n");
//     }
//     else
//     {
//         printf("d is the greatest\n");
//     }
//     return 0;
// }