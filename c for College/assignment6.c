#include <stdio.h>

int main()
{
    char str[__INT8_MAX__];
    char str1[__INT8_MAX__];
    printf("Enter the string to reverse :");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    int l = i - 1;
    int j = 0;
    if (str[l] == '\n') 
    {
        str[l] = '\0';
        l--;
    }

    printf("lenght of str is %d \n", l + 1);

    for (int i = l; i > 0, j <= l; i--)
    {
        str1[j] = str[i];
        j++;
    }
    str1[j] = '\0';
    printf("Reversed str is %s ", str1);

    return 0;
}