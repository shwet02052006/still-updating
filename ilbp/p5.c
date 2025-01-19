#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {  
        for(int k=5-i;k>0;k--){
            printf(" ");
        }
        for (int j = 0; j <=i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }
    printf("second pattern :\n");

      for (int i = 0; i < 5; i++)
    {  
        
        for (int j = 0; j <=i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

