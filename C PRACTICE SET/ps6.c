
// CHAPTER 6  – PRACTICE SET
// 1. Write a program to print the address of a variable. Use this address to get the
// value of the variable.

// #include<stdio.h>
// int main(){
//     int a=1;
//     int *p=&a;
//     printf("adress=%d\n",p);
//     printf("value=%d\n",*p);

//     return 0;
// }
// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?
// #include <stdio.h>

// int returning_5(int* ptr){
//     printf("The value of ptr is %d\n", ptr);
//     printf("The value at ptr is %d\n", *ptr);
//     return 5;
// }
// int main(){
//     int i = 2;
//     int* ptr = &i;
//     printf("The address of i is %u\n", &i);
//     returning_5(ptr);
//     return 0;
// }
// 3. Write a program to change the value of a variable to ten times of its current
// value.
// int change(int *n);
// int change(int *n){
//     return *n=*n*10;
// }

// #include<stdio.h>
// int main(){
//    int a=10;
//    change(&a);
//    printf("%d",a);

//     return 0;
// }
// 4. Write a function and pass the value by reference.
// #include <stdio.h>

// int sum(int *, int *);

// // Sum should change the value of x
// int sum(int* a, int* b){
//     *a = 6;
//     return (*a + *b);
// }

// int main(){
//     int x = 1, y=6;
//     printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
//     printf("The value of x is %d", x);
//     return 0;
// }

// 5. Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

// #include<stdio.h>
// int* sum(int a , int b ){
//     int c=a+b;
//     int*ptr=&c;
//     printf("sum is %d\n",a+b);
//     return ptr;
// }
// float* avg(int a , int b ){
//     float s=(a+b)/2.0;
//     float*ptr=&s;

//     printf("avg is %f\n",(a+b)/2.0);
//     return ptr;
// }
// int main(){
//  int x=10;
//  int y=20;
//  int* ptr1;
//  float* ptr2;
//  ptr1=sum(x,y);
//  ptr2=avg(x,y);

//  printf("ad of sum is %u and avg is %u",ptr1,ptr2);

// }
// 6. Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.
// #include<stdio.h>
// int main(){
//     int i=10;
//     int *ptr1=&i;

//     int**ptr2=&ptr1;
//     printf("adress of i is %d\n",ptr1);
//     printf("value of i is %d\n",*ptr1);

//     printf("value of i is %d\n",**ptr2);
//     printf("value of i is %d\n",i);

//     return 0;
// }
// 7. Try problem 3 using call by value and verify that it does not change the value of
// the said variable.
// #include<stdio.h>
// void con (int n){
//     printf("mul*10 is %d",10*n);
// }
// int main(){
//     int n=10;
// con(n);
//     return 0;
// }