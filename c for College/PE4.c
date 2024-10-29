#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int reversed = 0, original = num;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

// Function to find the largest palindrome from the product of two 3-digit numbers
int largest_palindrome() {
    int max_palindrome = 0;
    int a, b;
    
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) { // Avoid duplicate pairs
            int product = i * j;
            
            // If product is less than max_palindrome, no need to continue
            if (product <= max_palindrome)
                break;
            
            // Check if product is a palindrome and update max_palindrome if true
            if (is_palindrome(product)) {
                max_palindrome = product;
                a = i;
                b = j;
            }
        }
    }
    
    printf("The largest palindromic product is %d = %d * %d\n", max_palindrome, a, b);
    return max_palindrome;
}

int main() {
    largest_palindrome();
    return 0;
}
