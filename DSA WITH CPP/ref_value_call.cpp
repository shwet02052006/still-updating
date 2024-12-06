
// #include <iostream>
// using namespace std;

// void callByValue(int num) {
//     num = num + 10; // Modify the copy
//     cout << "Inside callByValue: " << num << endl;
// }

// int main() {
//     int a = 5;
//     cout << "Before callByValue: " << a << endl;
//     callByValue(a); // Pass by value
//     cout << "After callByValue: " << a << endl; // Original value remains unchanged
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void callByReference(int &num) { // Note the use of `&`
//     num = num + 10; // Modify the actual variable
//     cout << "Inside callByReference: " << num << endl;
// }

// int main() {
//     int a = 5;
//     cout << "Before callByReference: " << a << endl;
//     callByReference(a); // Pass by reference
//     cout << "After callByReference: " << a << endl; // Original value is changed
//     return 0;
// }
