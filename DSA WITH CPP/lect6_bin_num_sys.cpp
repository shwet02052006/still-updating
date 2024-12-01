
// octal number system has base 8 /
// decimal number system has base 10 / 0-9
// hexadecimal number system has base 16 /0-F

// binary number system has base 2 / 0-1

// decimal to binary 
// #include<iostream>
// using namespace std;
// int main()
// {

//     int n = 10;
//     int i = 0;
//     int rem[10];
//     while (n > 0)
//     {
//         rem[i] = n % 2;
//         n /= 2;
//         i++;
//     }

//     for (int j = i - 1; j >= 0; j--)
//     {
//         cout<<rem[j];
//     }

//     return 0;
// }
// binary to  decimal 
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int i = 0;
//     int n =110010 ;
//     int x=n;
//     int sum = 0;
//     int rem = 0;
//     while (n > 0)
//     {
//         sum = sum + (n % 10) * pow(2, i);
//         i++;
//         n /= 10;
//     }
//     cout << "binary to decimal of  "<< x <<"  is "<<sum;
//     return 0;
// }


// loop logic 2 for above 

//  while (n > 0)
//     {
//         int rem = n % 10;      // Extract last digit (binary digit)
//         sum += rem * base;     // Add to sum with correct base
//         base *= 2;             // Update base to next power of 2
//         n /= 10;               // Remove last digit
//     }

