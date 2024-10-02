// CHAPTER 7 – PRACTICE SET  
 
// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
// to the third element where ptr is a pointer pointing to the first element of the 
// array.
// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,4,5};
//     int *ptr=&a[0];//or *ptr=a;
    
 
//     printf("%d",*ptr+2);
//     return 0;
// }


// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element: 
// (i) True.  
// (ii) False.  CORRECT 
// (iii) Depends. 
// 3. Write a program to create an array of 10 integers and store multiplication table of 
// in it.
//#include <stdio.h>
// int main()
// {
//     int tb[10];
//     int n = 5;
//     for (int i = 0; i < 10; i++)
//     {
//        tb[i]=(i+1)*5;
//         printf("%d\n",tb[i]);
//     }
 
//     return 0;
// } 
// 4. Repeat problem 3 for a general input provided by the user using scanf. 
//#include <stdio.h>
// int main()
// {
//     int tb[10];
//     int n;
//     printf("Enter the number \n");
//     scanf("%d",&n);
//     printf("Table of number you entered :\n");
//     for (int i = 0; i <10; i++)
//     {
//        tb[i]=(i+1)*n;
//         printf("%d\n",tb[i]);
//     }
 
//     return 0;
// } 
// 5. Write a program containing a function which reverses the array passed to it. 
//#include <stdio.h>
// void print_arr(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \n ", arr[i]);
//     }
// }
// void reverse_arr(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i < (n / 2); i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \n ", arr[i]);
//     }
// }

// int main()
// {
//     int a[6] = {1, 2, 3, 4, 5, 6};

//     print_arr(a, 6);

//     reverse_arr(a, 6);
//     printf("Elements after reverse :\n");
//     print_arr(a, 6);

//     return 0;
// }

// 6. Write a program containing functions which counts the number of positive 
// integers in an array. 
//#include <stdio.h>

// int count_p(int arr[], int n)
// {
//     int p;
//     int i = 0;
//     while (i < n)
//     {
//         if (arr[i] > 0)
//         {
//             p++;
//         }
//         i++;
//     }
//     printf("%d", p);
// }
// int main()
// {

//     int a[] = {1, 2, 3, -4, 5, -6};
//     count_p(a, 6);

//     return 0;
// }
// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
// and 9 respectively. 
 //#include <stdio.h>
// int main()
// {
//     int arr[3][10];
//     int mul[] = {2, 7, 9};
//     for (int i = 0; i  <3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = mul[i] * (j + 1);
//         }
//     }
//     printf("Table of 2,7,9 respectively : \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//            printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 8. Repeat problem 7 for a custom input given by the user. 
// #include <stdio.h>
// int main()
// {
//     int arr[3][10];
//     int mul[] = {};
//     for(int i = 0;i<3;i++){
// printf("Enter the custom i/p\n");
// scanf("%d",&mul[i]);

//     }
//     for (int i = 0; i  <3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = mul[i] * (j + 1);
//         }
//     }
//     printf("Table of 2,7,9 respectively : \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//            printf(" %d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 9. Create a three–dimensional array and print the address of its elements in 
// increasing order.
//  #include <stdio.h>

// int main(){
//     int arr[2][3][4];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//                 printf("%u ", &arr[i][j][k]);
//             }
            
//         }
        
//     }
    
//     return 0;
// }


 
 
 
 
 
 
 
 
 
 
 
 
