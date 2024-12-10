// To find out subrray numbers formula approach is n*(n+1)/2 where n is size of array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    int n = sizeof(ar) / sizeof(ar[0]);
    for (int st = 0; st < n; st++)// used to change the row and reset the value of or change the value of ar[i] after changing the row
    {
        for (int end = st; end < n; end++) // used to ++ value in each sub array
        {
            for (int i = st; i <= end; i++)//used to print sub arrray 
            {
                cout << ar[i];
            }
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}