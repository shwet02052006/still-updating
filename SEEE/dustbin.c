#include <stdio.h>
#include <math.h> // Include math.h for sqrt function

int main() {
    int num = 2, n, count = 0, i;

    printf("Enter the nth term: ");
    scanf("%d", &n);
    printf("Prime numbers are:\n");

    while (count < n) {
        int isprime = 1; // Assume num is prime

        // Skip checking for even numbers greater than 2
        if (num > 2 && num % 2 == 0) {
            isprime = 0; // If it's even and greater than 2, it's not prime
        } else {
            // Check for factors only up to the square root of num
            for (i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isprime = 0; // Not prime if divisible by i
                    break; // Exit the for loop early
                }
            }
        }

        // If isprime remains 1, then num is prime
        if (isprime == 1) {
            printf("%d\t", num);
            count++;
        }

        num++; // Move to the next number
    }

    return 0;
}
