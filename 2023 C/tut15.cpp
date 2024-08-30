#include<iostream>
using namespace std;
//functions>>>Breaking the programs in many parts and that each part will work seperatly

//if you add int sum at the bottom of program you will get error that sum is not declared
//to remove that error WE USE
//FUNCTION PROTOTYPE >>>
// type function-name (arguements);
//int sum(int a,int b); >>ACCEPTABLE
//int sum(int ,int ); >>ACCEPTABLE

int sum(int a,int b);//gives asureity to check the program till bottom to find sum 
void g();
//void g();>>correct
//void g(void);>>correct
int main(){
    int num1,num2;
    cout<<"enter 1st num >>>"<<endl;
    cin>>num1;
    cout<<"enter 2 numnd >>>"<<endl;
    cin>>num2;// here num1 and num2 are the actual PARAMETERS
cout<<"SUM>>>"<<sum(num1,num2)<<endl;

g();
        return 0;// return 0 means the program has executed succesfully 
}

int sum(int a,int b){
 int c = a+ b;//FORMAL PRAMETERS A AND B WILL BE TAKING VALUES FROM  ACTUAL PARAMETERS num 1and num2
 return c;



}
void g(){
    cout<<"THIS IS END OF PROGRAM \n";
}

















/*#include<iostream>
using namespace std;

float Area(float r,float pi){
float a= r*r*pi;
return a;
}

int main(){
    float radius;
    

    cout<<"enter the radius of circle "<<endl;
    cin>>radius;
    cout<<"enter the value of pi"<<endl;
    
cout<<"AREA>>"<<Area(radius,3.142);


    return 0;
}*/ //THIS IS EXAMPLE MADE BY ME ''''''''''''
