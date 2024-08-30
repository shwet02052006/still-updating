#include<iostream.h>
#include<conio.h>
class circle{
private : float r, area;
public : void getdata()
{
cout<<"Enter the radius of circle";
cin>>r;
}  void cal(){area = 3.41*r*r;}
void display(){ cout<<area;}
};

void main()
{ clrscr();
int A;
circle  C;
C.getdata();
C.cal();
C.display();

getch();}