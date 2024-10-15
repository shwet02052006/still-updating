 #include<iostream.h>
 #include<conio.h>
 int fact(int);
 void main()
 {
 clrscr();
 int n;
 int product = fact(n);
 cout<<"enter the value of number"<<endl;
 cout<<"FACTORIAL>"<<product;
 getch();

 }

 int fact(int n)
 {int product =1 ;
 for( int i=1;i<=n;i++)
 product= product * i   ;
 return product  ;
 }