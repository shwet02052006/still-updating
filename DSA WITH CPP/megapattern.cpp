#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 1;
    char ch = 'A';
    // Program 1: Pyramid of Stars

    cout << "Program 1: Pyramid of Stars" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = n - i; k > 0; k--)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Program 2: Alphabet Matrix
    cout << "Program 2: Alphabet Matrix" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ch << "\t";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    // Program 3: Sequential Numbers in Matrix
    cout << "Program 3: Sequential Numbers in Matrix" << endl;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    // Program 4: Repeating Number Rows
    cout << "Program 4: Repeating Number Rows" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    // Program 5: Increasing Stars
    cout << "Program 5: Increasing Stars" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Program 6: Increasing Repeating Numbers
    cout << "Program 6: Increasing Repeating Numbers" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    cout << endl;

    // Program 7: Increasing Repeating Alphabets
    cout << "Program 7: Increasing Repeating Alphabets" << endl;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    cout << endl;

    // Program 8: Increasing Sequential Numbers
    cout << "Program 8: Increasing Sequential Numbers" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Program 9 :Reverse Triangle Pattern
    cout << "Program 9: Reverse Triangle Pattern" << endl;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // Program 10 :Floyd's Triangle Pattern
    cout << "Program 10 :Floyd's Triangle Pattern" << endl;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Program 11 :Floyd's Triangle Pattern(Alphabets)
    cout << "Program 10 :Floyd's Triangle Pattern(Alphabets)" << endl;

    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
