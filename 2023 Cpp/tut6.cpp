#include<iostream>
using namespace std;
// THEre are two types of header files 
// 1. system header files : comes with compiler 
// 2. user defined header files: written by programer  
int main()

{
int a=4,b=5;
cout<<"operators in c++"<<endl;
cout<<"following are the operators in c++"<<endl;
//ARItHMATIC OP
cout<<"VALUE OF a+b     ="<<a+b<<endl;
cout<<"VALUE OF a-b     ="<<a-b<<endl;
cout<<"VALUE OF a*b     ="<<a*b<<endl;
cout<<"VALUE OF a/b     ="<<a/b<<endl;
cout<<"VALUE OF a%b     ="<<a%b<<endl;
cout<<"VALUE OF +       ="<<a++<<endl;
cout<<"VALUE OF +       ="<<a--<<endl;
cout<<"VALUE OF -       ="<<++a<<endl;
cout<<"VALUE OF -       ="<<--a<<endl;

cout<<endl;

// Assignment operators --> used to assign values to variables 
// in a=5;
// char d='d';

cout<<"Following are the compasrison operstors===>>> "<<endl;
cout<<endl;
cout<<"The values of a==b is   "<<(a==b)<<endl;
cout<<"The values of a>b is    " <<(a>b)<<endl;
cout<<"The values of a<b is    " <<(a<b)<<endl;
cout<<"The values of a<=b is   "<<(a<=b)<<endl;
cout<<"The values of a>=b is   "<<(a>=b)<<endl;
cout<<"The values of a!=b is   "<<(a!=b)<<endl;
cout<<"          "<<endl;
//logical opertaors
// logic '1' = true 
// logic '0' = false 

// NOT !
// OR ||
// AND &&
cout<<"folowing are the logical operators in c++=>"<<endl;
cout<<endl;
cout<<"The value of ((a==b) || (a<b) operator is (atleast one should be true because it is OR op )======>> "<<((a==b) || (a<b))<<endl;
cout<<"The value of ((a==b) && (a<b) operator is (both should be true because it is AND  op )======>> "<<((a==b) && (a<b))<<endl;
cout<<"The value of (!(a==b) operator is ( it is NOT op )======>> "<<(!(a==b))<<endl;








return 0;

}
