#include<iostream.h>
#include<conio.h>
class bifocal
{ protected :
float cs1,cs2;
public:
void getcs(){
cout<<"enter  the marks of cs1"<<endl;
cin>>cs1;
cout<<"enter the mks of cs 2"<<endl;
cin>>cs2;
}
void putcs()
{
cout<<"mks of cs 1"<<cs1<<endl<<endl;

cout<<"mks of cs 2"<<cs2<<endl;
}};
class plane
{
protected :
float  p,c,m,rolln;
public:
void getplane(){
cout<<"enter the roll no"<<endl;
cin>>rolln;
cout<<"enter the mks of maths:"<<endl;
cin>>m;
cout<<"enetr the mks of chem:"<<endl;
cin>>c;
cout<<"enetr the mks of phsy:"<<endl;
cin>>p;}
void putplane(){
cout<<"your roll is "<<rolln<<endl;

cout<<"your pcm marks respectivley"<<p<< "   "    <<c<<"  " <<m<<endl;
}};
class student:public bifocal, public plane
{
protected:
float tot,avg;
public:
void result(){
tot=(p+c+m+cs1+cs2);
avg= tot/5;
cout<<"result:::"<<avg<<endl;
}};
void main()
{clrscr();
student s;
s.getcs();
s.getplane();

s.putcs();
s.putplane();
s.result();
getch();
}








