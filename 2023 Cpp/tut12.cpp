#include<iostream>
using namespace std;

int main(){
    // what is pointers---------> data type which holdes the address of other data type 
    int a=3;
    int *b=&a;
    //& --------> Address of operator (just b for ad of a)
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;
   
     //  * -------> (value at operator )Deference operator 
    cout<<"the value address of b is "<<*b<<endl;
    // pointer to pointer 
    int** c=&b;//value
    cout<<"The adress of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value of address value_at(value at (c))"<<**c<<endl;
    
    return 0;
}


