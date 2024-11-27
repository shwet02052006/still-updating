// #include <iostream>
// using namespace std;
// int factn(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         fact *= i;
//     }
//     return fact;
// }
// int factr(int r)
// {
//     int fact = 1;
//     for (int i = 1; i <= r; i++)
//     {

//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {
//     int nf = factn(n);
//     int rf = factr(r);
//     int factncr = factn(n - r);

//     return nf / (rf * factncr);
// }

// int main()
// { int n=3,r=2;
//     cout << nCr(n,r);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sumd(int n)
// {
//     int s = 0;
//     while (n != 0)
//     {

//         s += n % 10;
//         n /= 10;
//     }
//     return s;
// }
// int main()
// {

//     cout<<"sum di="<<sumd(5678);

//     return 0;
// }

// HOMEWORK
#include <iostream>

using namespace std;

// void primeornot(int n)
// {
//     int isprime ;
//     for (int i = 2; i < n; i++)
//     {

//         int isprime = 1;
//         if (n % i == 0)
//         {

//             isprime = 0;
//             break;
//         }
//     }
//     if (isprime == 1)
//     {

//         cout << n << " is prime";
//     }
//     else
//     {
//         cout << n << " is not prime";
//     }
// }
// void primenth(int n)
// {
//     int isprime, num = 2, i;
//     while (num < n)
//     { isprime = 1;
//         for (i = 2; i < num; i++)
//         {

//             if (num % i == 0)
//             {
//                 isprime = 0;
//                 break;
//             }
//         }

//         if (isprime == 1)
//         {
//             cout << num << "\t";
//         }
//         num++;
//     }
// }
// int fib(int n)
// {
//     int f1 = 0, f2 = 1;
//     int f3 = f1 + f2;
//     if (n == 0)
//     {
//         return 0;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         f3 = f1 + f2;
//         f1 = f2;
//         f2 = f3;
//     }
//     return f3;
// }
int main()
{
    // primeornot(12);
    // primenth(10);
    //cout << fib(1);
    return 0;
}