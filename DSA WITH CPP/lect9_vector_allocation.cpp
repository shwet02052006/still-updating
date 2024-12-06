#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
// same as {1,2,3, };
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    // it creates by creating twice block(capacity) although it can stay empty in case of size 3 capacity is 4

    //   for(int i : vec)
    // {
    //     cout<<i<<endl;
    // }
    return 0;
}