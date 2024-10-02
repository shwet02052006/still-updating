#include <stdio.h>
int main()
{
    char st[50];
    gets(st);
    printf("input taken by gets(st) is %s", st); // o/p with this "heySHWET"
    puts(st);                                    /* o/p with this hey  (automatic new line )
                                                                  SHWET */

    printf("SHWET");
    return 0;
}