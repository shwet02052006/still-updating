#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   
    vector<int> v;

    int m = INT8_MIN;
    int n;
    // cout << "Enter the nos  elements :\n";
    // cin >> n;
    cout<<"enter the elements "<<endl;
    for (int i = 0; i < 6; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }


    for (int i : v)
    {
        m = max(m, i);
    }
    cout <<"max=" <<m;
    return 0;
}