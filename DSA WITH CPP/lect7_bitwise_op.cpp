// & -->and operator
//|-->or
//^--> exclusive or o/p-->1^1=0 , 1^0=1
//<< --> left shift bit   a<<b--> a*2^b
//>> --> right  shift bit   a>>b--> a/2^b

// #include<iostream>
// using namespace std;

// int main(){
//      int a=10,b=2;
//     cout<<(a>>b)<<endl;;
//     cout<<(a<<b);
//     return 0;
// }
// HOMEWORK
// #include <iostream>
// using namespace std;
// int revnum(int n)
// {
//     int d;

//     int rev = 0;
//     while (n > 0)
//     {

//         d = n % 10;
//         rev = rev * 10 + (n % 10);
//         n /= 10;
//     }
//     cout << "rev is " << "\t";
//     return rev;
// }

// int main()
// {

//     cout << revnum(79743);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// bool isPowerOf2(int n) {
//     if (n <= 0) {
//         // Any number less than or equal to 0 cannot be a power of 2
//         return false;
//     }
//     if ((n & (n - 1)) == 0) {
//         // The number is a power of 2 if only one bit is set in its binary representation
//         return true;
//     }
//     // If neither condition is satisfied, it's not a power of 2
//     return false;
// }

// int main() {
//     int num = 20; // Example number
//     if (isPowerOf2(num)) {
//         cout << num << " is a power of 2." << endl;
//     } else {
//         cout << num << " is not a power of 2." << endl;
//     }
//     return 0;
// }
