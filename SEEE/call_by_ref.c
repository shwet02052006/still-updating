
#include <stdio.h>

void callByReference(int *num) {
    *num = *num + 10; // Modify the value at the address
    printf("Inside callByReference: %d\n", *num);
}

int main() {
    int a = 5;
    printf("Before callByReference: %d\n", a);
    callByReference(&a); // Pass address of the variable
    printf("After callByReference: %d\n", a); // Original value is changed
    return 0;
}
