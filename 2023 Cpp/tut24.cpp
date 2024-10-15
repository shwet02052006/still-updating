#include<iostream>
using namespace std;
class emp{
private: 
int count;
int id;
public:
void getdata(){
cout<<"enetr your id "<<endl;
cin>>id;
}
void putdata() 
{
cout<<"id of emp "<<id<<endl;


}



};





int main(){
    emp shwet;
    shwet.getdata();
    shwet.putdata();
    return 0;
}