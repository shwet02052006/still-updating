#include <stdio.h>

int main() {
    int a, b, c;
    int sum = 1000;
    int product;

    for (a = 1; a < sum / 3; a++) {        // a must be less than sum / 3
        for (b = a + 1; b < sum / 2; b++) { // b must be less than sum / 2
            c = sum - a - b;                // c is the remainder of the sum
            if (a * a + b * b == c * c) {   // Check if (a, b, c) is a Pythagorean triplet
                product = a * b * c;
                printf("The Pythagorean triplet is: a = %d, b = %d, c = %d\n", a, b, c);
                printf("The product abc is: %d\n", product);
                return 0; // Exit the program after finding the triplet
            }
        }
    }

    printf("No Pythagorean triplet found.\n");
    return 0;
}
