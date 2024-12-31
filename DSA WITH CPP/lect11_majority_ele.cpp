#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int c = 0;
    int arr[] = {1, 2, 3, 4, 4, 4, 1};
    int n = sizeof(arr);
    int i;
    int j=0;
    for ( i = 0; i < (n / 2); i++)
    {
        if (arr[i] == arr[i + j])
        {

            c++;

        }
    }
    if(c>n/2){
        cout<<arr[i]<<"majaority";
    }
    return 0;
}