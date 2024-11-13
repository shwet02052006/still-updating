#include <stdio.h>
int main()
{ // FIB FOR 10 ELEMEMTS
    int f1 = 1, f2 = 2, f3=0;
    printf("%d \t%d", f1, f2);
    printf("\t");
    for (int i = 1; i <= 8; i++)
    {
        f3 = f1 + f2;

        printf("%d\t", f3);
        f1 = f2;
        f2 = f3;
    }

    return 0;
}
