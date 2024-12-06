#include <stdio.h>

void callByValue(int num) {
    num = num + 10; // Modify the copy
    printf("Inside callByValue: %d\n", num);
}

int main() {
    int a = 5;
    printf("Before callByValue: %d\n", a);
    callByValue(a); // Pass by value
    printf("After callByValue: %d\n", a); // Original value remains unchanged
    return 0;
}
