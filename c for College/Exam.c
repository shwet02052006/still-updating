//---------------------------------------- MSE 1
// Program A: Find factorial of a number
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    return 0;
}

// Program B: Find the sum of the digits of a number
#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of the digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}

// Program C: Print all odd numbers in a range and display their sum
#include <stdio.h>

int main() {
    int r1, r2, sum = 0;

    printf("Enter the range (r1 and r2): ");
    scanf("%d %d", &r1, &r2);

    printf("Odd numbers in the range %d to %d are: ", r1, r2);
    for (int i = r1; i <= r2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of odd numbers is: %d\n", sum);

    return 0;
}
// --------------------------------------MSE 2

// Program 1a: Binary Search in an Array
#include<stdio.h>
int main()
{
    int arr[10], i, key, mid, low = 0, high = 9, flag = 0;
    printf("Enter 10 numbers in ascending order: ");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to be searched: ");
    scanf("%d", &key);
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("Number found at position %d", mid + 1);
            flag = 1;
            break;
        }
        else if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(flag == 0)
        printf("Number not found");
    return 0;
}

// Program 1b: Multiply Two 2x2 Matrices
#include<stdio.h>
int main()
{
    int m1[2][2], m2[2][2], res[2][2], i, j, k, sum;
    printf("Enter Matrix 1 of size 2x2: ");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &m1[i][j]);
    printf("Enter Matrix 2 of size 2x2: ");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &m2[i][j]);
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
        {
            sum = 0;
            for(k = 0; k < 2; k++)
                sum += m1[i][k] * m2[k][j];
            res[i][j] = sum;
        }
    printf("Result of Matrix Multiplication:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}

// Program 1c: Patient Records Management
#include<stdio.h>
struct records
{
    int p_id, age;
    char gender;
    char name[15];
};
int main()
{
    struct records s[5];
    int key, i, flag = 0;
    printf("Enter details of patient: ");
    printf("\nEnter Patient Id: ");
    scanf("%d", &s[0].p_id);
    printf("Enter Patient Name: ");
    fflush(stdin);
    gets(s[0].name);
    printf("Enter Patient age: ");
    scanf("%d", &s[0].age);
    fflush(stdin);
    printf("Enter Gender of Patient: ");
    scanf("%c", &s[0].gender);
    printf("Enter Patient Id to search patient: ");
    scanf("%d", &key);
    for(i = 0; i < 5; i++)
    {
        if(s[i].p_id == key)
        {
            printf("Patient details are:\n");
            printf("Patient Name: ");
            puts(s[i].name);
            printf("\nPatient Id: %d", s[i].p_id);
            printf("\nPatient Age: %d", s[i].age);
            printf("\nPatient Gender: %c", s[i].gender);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("Patient record not found.");
    return 0;
}

// Program 2a: Print Upper Triangular Matrix
#include<stdio.h>
void printmat(int m[2][2]);
int main()
{
    int mat[2][2];
    int i, j;
    printf("Enter 2x2 Matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &mat[i][j]);
    printmat(mat);
    return 0;
}
void printmat(int m[2][2])
{
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(j < i)
                printf("0 ");
            else
                printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

// Program 2b: Sum of Digits (Recursive)
#include<stdio.h>
int fun(int);
int main()
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = fun(num);
    printf("Addition of digits of %d is %d.", num, sum);
    return 0;
}
int fun(int n)
{
    if(n == 0)
        return 0;
    else
        return (n % 10) + fun(n / 10);
}

// Program 2c: Check Pangram
#include<stdio.h>
int main()
{
    char sentence[1000];
    int alphabet[26] = {0};
    int i, flag = 1, index;
    printf("Enter a sentence: ");
    gets(sentence);
    for(i = 0; sentence[i] != '\0'; i++)
    {
        if(sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            index = sentence[i] - 'a';
            alphabet[index] = 1;
        }
    }
    for(i = 0; i < 26; i++)
    {
        if(alphabet[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("The entered sentence is a pangram.\n");
    else
        printf("The entered sentence is not a pangram.\n");
    return 0;
}

//-------------------------ESE-----------------
// Program 1: Check if the character is a lowercase alphabet
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') {
        printf("Alphabet %c is lowercase.\n", c);
    } else {
        printf("Alphabet %c is not lowercase.\n", c);
    }
    return 0;
}

// Program 2: Check if the character is a special symbol
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~')) {
        printf("%c is a symbol.\n", c);
    } else {
        printf("%c is not a symbol.\n", c);
    }
    return 0;
}
// or 
#include <stdio.h>
int main() {
    char c;
    printf("Enter the value\n");
    scanf("%c", &c);

    // Correct ranges for letters and digits
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
        printf(" %c is not a symbol.\n", c);
    } else {
        printf(" %c is a symbol.\n", c);
    }
    return 0;
}




// Program 3: Print a pattern of stars
#include <stdio.h>
int main() {
    for (int i = 11; i > 0; i--) {
        if (i % 2 != 0) {
            for (int j = i; j > 0; j--) {
                printf("*\t");
            }
            printf("\n");
        }
    }
    return 0;
}
// or
 #include <stdio.h>
int main() {
    int i,j;
    for(i=6;i>=1;i--){
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
   
return 0;
}

// Program 4: Add first seven terms of the series 1/1! + 2/2! + 3/3! ...
#include <stdio.h>
float fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    float sum = 0;
    for (int i = 1; i <= 7; i++) {
        sum = sum + (i / fact(i));
    }
    printf("Sum of the series: %f\n", sum);
    return 0;
}

// Program 5: Multiply two 3x3 matrices
#include <stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3];
    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Program 6: Reverse a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

// Program 7: Print Fibonacci series up to n without recursion
#include <stdio.h>
int main() {
    int n, f1 = 0, f2 = 1, f3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", f1, f2);
    for (int i = 2; i < n; i++) {
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
    printf("\n");
    return 0;
}

// Program 8: Power function
#include <stdio.h>
int power(int x, int y) {
    int result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}

// Program 9: Call by value and call by reference
#include <stdio.h>
void callByValue(int num) {
    num = num + 10; // Modify the copy
    printf("Inside callByValue: %d\n", num);
}

void callByReference(int *num) {
    *num = *num + 10; // Modify the value at the address
    printf("Inside callByReference: %d\n", *num);
}

int main() {
    int a = 5;
    printf("Before callByValue: %d\n", a);
    callByValue(a);
    printf("After callByValue: %d\n", a);

    int b = 5;
    printf("Before callByReference: %d\n", b);
    callByReference(&b);
    printf("After callByReference: %d\n", b);

    return 0;
}
