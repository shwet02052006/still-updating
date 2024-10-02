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
printf("%s",strcat(s1,s2));
    return 0;
}