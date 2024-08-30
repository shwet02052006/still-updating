#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
//constant in c++
//const int a=9;
//cout<<"the value of a was"<<a<<endl;
//
//cout<<"the value of a is"<<a<<endl;

// setw in iomanip
//manipulator in cpp

//int a=33,b=99,c=1232;
//cout<<"the value of a is without setw() "<<a<<endl;
//cout<<"the value of b is without setw()"<<b<<endl;
//cout<<"the value of c is without setw()"<<c<<endl;
//cout<<"the value of a is "<<setw(4)<<a<<endl;
//cout<<"the value of b is "<<setw(4)<<b<<endl;
//cout<<"the value of c is "<<setw(4)<<c<<endl;
//o/p**************
/*the value of a is without setw() 33
the value of b is without setw()99
the value of c is without setw()1232
the value of a is   33
the value of b is   99
the value of c is 1232*/

//operator presedence

int a = 3,b=4;
//int c= (a*b)+b;
int c=((((a*5)+b)-45)+87);
cout<<c;




















    return 0;
}