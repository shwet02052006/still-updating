#include <stdio.h>
#include <string.h>

int main() {
    int flag = 0;
    char str1[100];
    char str2[100];

    printf("Enter string 1: ");
    scanf("%[^\n]%*c", str1); // %*c to consume newline left in the buffer

    printf("Enter string 2: ");
    scanf("%[^\n]%*c", str2);

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    if (l1 == l2) {
        for (int i = 0; i < l1; i++) {
            if (str1[i] != str2[i]) {
                flag = 1;
                break;
            }
        }
    } else {
        flag = 1;
    }

    if (flag == 0) {
        printf("The strings are the same.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}