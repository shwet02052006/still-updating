#include <iostream> //CONDITIONAL STAT. AND LOOPS
using namespace std;

int main()
{ // Find lowercase uppr case
  //     char ch;
  //     cout << "Enter the value of char: \n";
  //     cin >> ch;
  //     int s = ch;

    //     if (s >= 65 && s <= 90)
    //     {
    //         cout << ch << " is a upper case char \n";
    //     }
    //     else if(s>=97 && s<=122)
    //     {
    //         cout << ch << " is a lower case char \n";
    //     }

    // int i = 1;
    // int sum = 0,n=5;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << sum;
    int n = 5;
    int sum = 0;
    for (int z = 1; z <= n; z++)
    {

        if (z % 2 != 0)
        {
            cout << z << "\t";
            sum += z;
        }
    }
    cout << sum;

    return 0;
}