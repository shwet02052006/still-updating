#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to estimate the upper limit for finding n primes
int estimate_upper_limit(int n) {
    if (n < 6) return 15; // Small cases
    return (int)(n * log(n) + n * log(log(n))); // Prime number theorem estimate
}

int main() {
    int n;
    printf("Enter the number of primes to generate: ");
    scanf("%d", &n);

    // Estimate the upper limit to ensure we find at least n primes
    int limit = estimate_upper_limit(n);

    // Allocate a boolean array for the sieve
    int *is_prime = (int *)calloc(limit + 1, sizeof(int));

    // Initialize all numbers as prime
    for (int i = 2; i <= limit; i++) {
        is_prime[i] = 1;
    }

    // Sieve of Eratosthenes
    for (int i = 2; i <= sqrt(limit); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = 0; // Mark multiples as not prime
            }
        }
    }

    // Collect and print the first n primes
    int count = 0;
    printf("The first %d prime numbers are:\n", n);
    for (int i = 2; i <= limit && count < n; i++) {
        if (is_prime[i]) {
            printf("%d\t", i);
            count++;
        }
    }

    printf("\n");

    // Free allocated memory
    free(is_prime);

    return 0;
}
