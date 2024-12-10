#include <stdio.h>
#include <stdlib.h>

#define LIMIT 2000000

int main() {
    long long sum = 2; // Start with the prime number 2
    unsigned char *sieve = (unsigned char *)malloc((LIMIT / 2 + 1) * sizeof(unsigned char));

    // Mark all numbers as prime (odd numbers only)
    for (long long i = 0; i <= LIMIT / 2; i++) {
        sieve[i] = 1; // Assume all odd numbers are prime
    }

    // Sieve of Eratosthenes - Mark multiples of primes as non-prime
    for (long long i = 3; i * i <= LIMIT; i += 2) {
        if (sieve[i / 2]) { // If i is prime
            for (long long j = i * i; j <= LIMIT; j += i * 2) {
                sieve[j / 2] = 0; // Mark multiple as non-prime
            }
        }
    }

    // Sum the primes (only odd numbers are marked in the sieve)
    for (long long i = 3; i <= LIMIT; i += 2) {
        if (sieve[i / 2]) {
            sum += i;
        }
    }

    printf("Sum of primes below 2,000,000 = %lld\n", sum);

    // Free allocated memory
    free(sieve);

    return 0;
}
