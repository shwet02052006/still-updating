#include <stdio.h>
#include <string.h>
int main()
{ // strlen()
    char st[] = "samosa";
    printf("lenght of str is %d\n", strlen(st)); // excluding null \0;
    // strcpy (target,source)
    char source[] = "shwet";
    char target[30];
    strcpy(target, source); // target now contains "shwet"
    printf("%s\n",target);
    //strcat()
    char s1[12] = "hello"; 
char s2[] = "shwet"; 
strcat(s1,s2); // s1 now contains "helloshwet" <no space in between>

printf("%s\n",s1);
//strcmp() 
// Returns 0 if both str are same
strcmp("far", "joke");    // Negative value 
strcmp("joke", "far");    // Positive value 
int a=strcmp("a","b"); // according to ascii seq order if (a,b) -ve value 
printf("%d\n",a);
    return 0;
}