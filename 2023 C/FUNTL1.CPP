 #include<iostream.h>
 #include<conio.h>
 int square(int n);

 void main()
 {
 clrscr();
 int num;
 cout<<"ente the number"<<":-"<<endl;
cin>>num;
int sq = square(num);// function calling or fuintion prptotype
cout<<"square of the number the equals to :"<<sq;
getch();
}
int square(int n)
{
 int s= n*n;
 return s;
 }
