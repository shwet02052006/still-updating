#include<iostream>
using namespace std;

int main(){
   
chek a;
a.get();
a.posi();
    return 0;
}
class chek
{
private:
int num;
public:
void get(){
cout<<"ent.the num"<<endl;
cin>>num;}

void posi(){
if(num>0){
cout<<"num is +ve";}
else{
cout<<"num is neg";
}if(num==0){cout<<"zero";}
};
