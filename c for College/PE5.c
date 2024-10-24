
#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM of two numbers
long long lcm(int a, int b) {
    return (a / gcd(a, b)) * (long long)b;
}

int main() {
    long long result = 1;
    
    // Loop through numbers from 1 to 20
    for (int i = 2; i <= 20; i++) {
        result = lcm(result, i);
    }

    printf("The smallest number divisible by all numbers from 1 to 20 is: %lld\n", result);
    return 0;
}
