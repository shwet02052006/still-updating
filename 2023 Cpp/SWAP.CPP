
#include<iostream>
using namespace std;

void swap(int &a , int &b);
void swap(int &x , int &y )
{
    int temp;
    temp = x;
    x =y;
    y = temp;
}

int main()
{ 
    int a,b;
    cout<<"enter the number 1>>"<<endl;
    cin>>a;
    cout<<"Enter the number 2>>"<<endl;
    cin>>b;
    cout<<"values before swapping>>"<<a<<"     "<<b<<endl;
    swap(a , b);
    cout<<"values after  swapping>>"<<a<<"     "<<b<<endl;
    return 0;
}
