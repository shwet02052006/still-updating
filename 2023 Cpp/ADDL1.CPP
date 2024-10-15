#include<iostream.h>
#include<conio.h>
int sum(int n1,int n2);
void main()
{
clrscr();
int num1,num2,add;
cout<<"enter the1st  number"<<endl;
cin>>num1;
cout<<"eneter the 2nd num "<<endl;
cin>>num2;
add = sum(num1,num2) ;
cout<<"sum of the two number equals to :"<<add;
getch();
}
int sum(int n1,int n2)
{
int s = n1+n2;
 return s;
 }