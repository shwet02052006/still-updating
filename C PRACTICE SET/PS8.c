// CHAPTER 8  – PRACTICE SET  
// 1. Which of the following is used to appropriately read a multi-word string. 
// 1. gets() correct
// 2. puts() 
// 3. printf() 
// 4. scanf() 
// 2. Write a program to take string as an input from the user using %c and %s confirm 
// that the strings are equal. 
//#include<stdio.h>
// int main(){
//     char str[6];
//     for (int  i = 0; i < 5; i++)
//     {
//      scanf("%c",&str[i]);
//      fflush(stdin);// Every time we enter the char it also calculated enter with  it for that this function is used 
//     }
//     str[5]='\0';
//     printf("%s",str);
//     return 0;
// }
// 3. Write your own version of strlen function from <string.h>


// #include <stdio.h>

// int strlen(char str[])
// {
//     int i = 0, count;
//     int c = str[i]; 
//     while (c != '\0')
//     {
//         c = str[i];
//         i++;
//     }
//     count = i - 1;
//     return count;
// }
// int main()
// {
//     char str[] = "shwet";

//     printf("%d", strlen(str));

//     return 0;
// }
// 4. Write a function slice() to slice a string. It should change the original string such 
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
// for slice.
//     #include <stdio.h>


// char* slice(char str[], int m, int n){
//     int i=0, count;  
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];

//     str = ptr1;
//     str[n] = '\0';
//     return str;


// }
// int main(){
//     char str[] = "strom bhai";
    
//     printf("%s", slice(str, 1, 7));
//     return 0;
// }
// 5. Write your own version of strcpy function from <string.h> 
//#include <stdio.h>
// int mystrlen(char str[])
// {
//     int i = 0, count;
//     int c = str[i];
//     while (c != '\0')
//     {
//         c = str[i];
//         i++;
//     }
//     count = i - 1;
//     return count;
// }
// void mystrcpy(char t[], char s[])
// {

//     for (int i = 0; i < mystrlen(s); i++)
//     {

//         t[i] = s[i];
//     }
//     t[mystrlen(s)] = '\0';
// }
// int main()
// {
//     char s[] = "Hello, World!";
//     char t[100];

//     mystrcpy(t, s);
//     printf("%s and %s\n", t, s);
//     return 0;
// }

// 6. Write a program to encrypt a string by adding 1 to the ascii value of its 
// characters.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = {"shwet"};
//     for (int i = 0; i < strlen(str); i++)
//     {
//         str[i] = str[i] +1;
//     }
//     printf("%s\n", str);
//     return 0;
// }
// 7. Write a program to decrypt the string encrypted using encrypt function in 
// problem 6. 
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = {"tixfu"};
//     for (int i = 0; i < strlen(str); i++)
//     {
//         str[i] = str[i] -1;
//     }
//     printf("%s\n", str);
//     return 0;
// }
// 8. Write a program to count the occurrence of a given character in a string.
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int count = 0;  // Declare and initialize count in one step
//     char c = 's';   // Initialize the character you're searching for
//     char str[] = "shwet";  // The string to search in

//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == c)  // Use '==' for comparison
//         {
//             count++;  // Increment count when 'a' is found
//         }
//     }

//     printf("%d", count);  // Print the result
//     return 0;
// }

// 9. Write a program to check whether a given character is present in a string or not.
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int count = 0;        // Declare and initialize count in one step
//     char c = 's';         // Initialize the character you're searching for
//     char str[] = "shwet"; // The string to search in

//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == c) // Use '==' for comparison
//         {
//             count = 1;
//             ; 
//         }
//     }

//     if (count)
//     {
//         printf("letter %c is found",c);
//     }; // Print the result
//     return 0;
// }
