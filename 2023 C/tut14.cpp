#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */


    int eId;
    char favChar;
    float salary;

}ep;// by ep in end we dont have to write ''typedef struct employee''





union money
{
   

    int rice; //4
    char car; //1
    float pounds; //4

};
int main(){
   //ep stromy;
   //stromy.eId = 1;
   //stromy.favChar = 's';
   //stromy.salary =  10000000;

   //cout<<"Salary ofstromy =Rs. "<<stromy.salary<<endl;
   //cout<<"favchar ofstromy=    "<<stromy.favChar<<endl;
   //cout<<"eid ofstromy    =    "<<stromy.eId<<endl;
  
  
  // union money m1;   // in union you cant assign 2 values at same time it ovverwrites everytime 
//
 //
  // m1.car = 'a';
  // cout<<m1.car;

  enum Meal{breakfast,lunch,dinner};
  Meal m1 = breakfast; // here mealmbecomes data type just like int,char float ;
  cout<< breakfast<<endl;
  cout<< lunch    <<endl;
  cout<< dinner   <<endl;
  cout<< (m1==0)<<endl;// checking this condition in o/p you will get true as 1 and false as 0 
   
   return 0;


} 