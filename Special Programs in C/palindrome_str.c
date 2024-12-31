
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, i, j;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word

    // Get the length of the string
    length = strlen(str);

    // Reverse the string
    for (i = 0, j = length - 1; j >= 0; i++, j--) {
        reversedStr[i] = str[j];  // Copy characters in reverse order
    }
    reversedStr[i] = '\0';  // Null-terminate the reversed string

    // Compare the original string with the reversed string
    if (strcmp(str, reversedStr) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
