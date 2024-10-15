#include<iostream>
using namespace std;
int fib( int n){
if(n<2){
return 1;

}
return fib(n-2)+fib(n-1);// 0 is the 1st position in series 


}
int main(){

//int factorial (int n ){ if (n<=1){
//
//    return 1;
//}
//
//return n * factorial(n-1);

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;




//}

//int main(){
    
// factorial of a number 
// n! = n * (n-1)!
//
//int a;
//
//cout<<"Enter the number for factorrial >>"<<endl;
//cin>>a;
//cout<<"Factorial of A is " <<a<<"!  ="<<factorial(a)<<endl;  
int a;
cout<<" enter the num";
cin>> a;
cout<<"The factorial of "<<a<<"is     "<<fib(a)<<endl;



    return 0;
}