#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{
   //we cant change the value of sum function called with variable in main()
    //bc it directly copies value which is passed in  main
    return (a + b);
}
int main()
{
    int c = 9, d = 10;
    printf("sum=%d", sum(c, d));
    return 0;
}