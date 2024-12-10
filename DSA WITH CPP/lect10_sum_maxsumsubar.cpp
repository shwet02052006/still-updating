// To find out subrray numbers formula approach is n*(n+1)/2 where n is size of array
#include <iostream>
#include <vector>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    int n = sizeof(ar) / sizeof(ar[0]);
    int maxsum = INT8_MIN;
    int ends = 0;

    for (int st = 0; st < n; st++) // used to change the row and reset the value of or change the value of ar[i] after changing the row
    {
        int sum = 0;
        for (int end = st; end < n; end++) // used to ++ value in each sub array
        {
            sum += ar[end];
            maxsum = max(maxsum, sum);
            
        }
    }
    cout << maxsum << "\t" << endl;
   
    return 0;
}
/// better optimised in kadanes alogo