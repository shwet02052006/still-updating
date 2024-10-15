#include<iostream>
using namespace std;
int sum(int a, int b) {
cout<<"using two funcn agr.::"<<endl;
return a+b;



}


int sum(int a, int b, int c){

cout<<"using tthree funcn agr.:::"<<endl;
return a+b+c;





}
// calculatinng the volume of cylinder
int volume (double r, int h){

cout<<"volume of cylinder  "<<endl;



return(3.14*r*r*h);

}
// calculate the volume of cube
int volume(int a){cout<<"*volume of cube*"<<endl;
return a*a*a;







}
int main(){
    // function overloading 
cout<<" 3+5 ==="<<sum(3,5)<<endl;
cout<<" 3+5+9 ==="<<sum(3,5,9)<<endl;
cout<<"volume of cylinder with h=4,r=2.2"<<volume(2.2,4)<<endl;
cout<<"volume of cube with a=3>>>>>"<<volume(3)<<endl;
    return 0;
}