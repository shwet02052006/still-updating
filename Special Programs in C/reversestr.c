#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int j = 0;
    char s1[100];
    printf("Enter your str:\n");

    fgets(s, 100, stdin); // lenghts counts with \n if char are 5 then len is 6 including \n

    int l = strlen(s) - 1; // to remove \n len

    for (int i = l; j < l, i >= 0; i--)
    {

        s1[i] = s[j];
        j++;
    }

    s1[j] = '\0';
    printf("reversed string is  %s \n", s1);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char str[__INT8_MAX__];
//     char str1[__INT8_MAX__];
//     printf("Enter the string to reverse :");
//     fgets(str, sizeof(str), stdin);

//     int i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     int l = i - 1;
//     int j = 0;
//     if (str[l] == '\n') 
//     {
//         str[l] = '\0';
//         l--;
//     }

//     printf("lenght of str is %d \n", l + 1);

//     for (int i = l; i > 0, j <= l; i--)
//     {
//         str1[j] = str[i];
//         j++;
//     }
//     str1[j] = '\0';
//     printf("Reversed str is %s ", str1);

//     return 0;
// }