#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int main()
{
    vector<int> arr;
    int maxsum = INT_MIN; // Correct initialization
    int sum = 0;
    cout << "ENTER 10 ELEMENTS IN VEC\n";
    for (int i = 0; i < 10; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    for (int i : arr)
    {
        sum = sum + i;
        if (sum > maxsum)
        {
            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Maximum Sum of Contiguous Subarray: " << maxsum << endl;

    return 0;
}
