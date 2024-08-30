#include<iostream.h>
#include<conio.h>

//area and circum circle
float area(int  r);
float circum(int  r);
void main()
{
clrscr();
float R,A,CIR;
cout<<"enter the radius of the circle"<<endl;
cin>>R;
A = area(R);
CIR= circum(R);
cout<<"area:"<<A<<endl<<"Circum:"<<CIR;
getch();
}
float area( int r)
{
float ar=3.142*r*r;
return ar;
}
float circum(int  r)
{
float cir= 2*3.142*r;
return cir ;
}