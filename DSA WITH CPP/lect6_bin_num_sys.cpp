
// octal number system has base 8 /
// decimal number system has base 10 / 0-9
// hexadecimal number system has base 16 /0-F

// binary number system has base 2 / 0-1
// to decimal to binary divide num repeadly with 2

#include<iostream>
using namespace std;
int main()
{

    int n = 50;
    int i = 0;
    int rem[10];
    while (n > 0)
    {
        rem[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout<<rem[j];
    }

    return 0;
}
