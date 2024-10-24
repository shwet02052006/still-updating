#include <stdio.h>
int main()
{
    int sqofsum = 0;
    int     sumofsq =0;
    for (int i = 1; i <= 100; i++)
    {
        sumofsq = ( sumofsq  + i*i) ;
    }
    for (int i = 1; i <= 100; i++)
    {
       sqofsum = ( sqofsum + i) ;
    }
    printf("%d\n", sumofsq ); // this was for sum of squares 
    printf("%d\n",sqofsum*sqofsum ); // this was for  square of sum
    printf("%d",(sqofsum*sqofsum)-sumofsq);
    return 0;
}