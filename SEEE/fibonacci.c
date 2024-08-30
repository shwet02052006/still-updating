// // iterattive 
// int main()
// {
//     int n, f1 = 0, f2 = 1, f3;

//     printf("Enter the number of terms you want in the series:\n");
//     scanf("%d", &n);

//     if (n >= 1) {
//         printf("%d\t", f1); // Print the first term
//     }

//     if (n >= 2) {
//         printf("%d\t", f2); // Print the second term
//     }

//     for (int i = 3; i <= n; i++)
//     {
//         f3 = f1 + f2;
//         printf("%d\t", f3);
//         f1 = f2; // Update f1 to the next number in the series
//         f2 = f3; // Update f2 to the next number in the series
//     }

//     return 0;
// }
#include<stdio.h>
void fib(){
int f1=0,f2=1,f3;
if(f1==0)
{
    printf("%d\t",f1);
    
}
if(f2==1)
{
    printf("%d\t",f2);

}

f3=f1+f2;
printf("%d\t",f3);


}

int main(){
    fib();
    return 0;
}