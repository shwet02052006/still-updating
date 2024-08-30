#include<iostream>
using namespace std;

int main(){
    //example of printing array
   int mks[]= { 12, 23 , 45 , 99};
   cout<<"these are the marks = "<<endl;
   cout<<mks[0]<<endl; 
   cout<<mks[1]<<endl; 
   cout<<mks[2]<<endl; 
   cout<<mks[3]<<endl;
   cout<<"math marks ="<<endl;
   int mathmks[4];
   mathmks[0] = 64;
   mathmks[1] = 45;
   mathmks[2] = 837;
   mathmks[3] = 99;
   // we  can change the array in midddle of the program  
  //mathmks[3] = 10000;
  //cout<<mathmks[0]<<endl; 
  //cout<<mathmks[1]<<endl; 
  //cout<<mathmks[2]<<endl;
  //cout<<mathmks[3]<<endl;  

  //for (int  i = 0; i < 4; i++)
  //{
  // /* code */
  // cout<< "The value of marks "<<i<<"<marks"<< mks[i]<<endl;


  //}
  //
//  cout<<"using while loop;"<<endl;
//int i=0;
//while (i<4)
//
//{
//    cout<<i << "    " <<mks[i]<<endl;
//    i++;
//}
//
//cout<<" using do while loop "<<endl;
// int i=0;
// do{
//cout<<i<<"   "<<mks[i]<<endl;
//i++;
// }while(i<4);



cout<<mks<<endl;// we dont need & to see the addrease of mks array 


// POINTERS AND ARRAYS ....................
// pointer arithmatic basic formula 
//  ADDRES NEW = ADDRESS CURRENT + i*size of dataype 
// p+i = p+ i*size
int* p=mks;// here p is storing addres of array //

//cout<<"the value of mks[0] is "<<*p<<endl;
//cout<<"the value of mks[1] is "<<*(p+1)<<endl;
//cout<<"the value of mks[2] is "<<*(p+2)<<endl;
//cout<<"the value of mks[3] is "<<*(p+3)<<endl;
cout<<*(p++)<<endl;// post increment first it will print value then ince
cout<<*(++p)<<endl;// post incremented value + { ++p}















    return 0;
}