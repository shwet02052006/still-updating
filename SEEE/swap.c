
int swap(int *x, int *y);//funtion prototype
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

#include <stdio.h>
int main()
{
    int a = 11, b = 2;
    printf("values of a=%d and b=%d before swappping are \n", a, b);
    swap(&a, &b);
    printf("values of a=%d and b=%d after swapping are \n", a, b);
    return 0;
}