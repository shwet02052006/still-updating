#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n;
    int size = 5;
    
    for (int i = 0; i < size; i++)

        n.push_back(i);
    for (int j : n)
    {

        cout << n[j]<<"\t";
    }
    return 0;
}