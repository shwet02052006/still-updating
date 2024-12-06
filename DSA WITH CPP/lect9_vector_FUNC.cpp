// #include <iostream>
// #include <vector>
// using namespace std;

// int main()

// {
//     vector<int> numm;
//     vector<int> num = {1, 2, 3};
//     vector<int> n(3, 1); // size,value

//     for (int nos : num)//for each loop to print each element
//     {

//         cout <<nos<< endl;
//     }

//     return 0;
// }

// vector FUNCTIONS
// 1. SIZE

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//      vector<int> num = {1, 2, 3};// sz is 3
//      cout<<num.size();

//     return 0;
// }

// PUSH BACK
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> num;
//     cout << num.size()  << " bef pb\n";
//     num.push_back(99);
//     num.push_back(23);
//     num.push_back(22);//used to inset values
//     cout << num.size()  << " aft pb\n";
//     cout<<num[0]<<endl;
//     for(int p:num){// used to print each value in vector

//         cout<<p<<endl;

//     }
//     return 0;
// }

//POP BACK
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> num;
//     cout << num.size()  << " bef pb\n";
//     num.push_back(99);
//     num.push_back(9);
//     num.push_back(9);

//     cout << num.size()  << " aft pb\n";
//     num.pop_back();// last index value is extracted

//     for(int p:num){// used to print each value in vector

//         cout<<p<<endl;

//     }
//     return 0;
// }
 
// FRONT and BACK 
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> num = {1, 2, 3, 4};
//     
//     cout<<num.size()<<endl;
//     cout << num.front()<<endl; // print value of index 0;
//     cout << num.back()<<endl; // print value of index last(size -1);
//     cout << num[3]<<endl; // print value of index last(size -1); same as above 

//     return 0;
// }

// AT (at -- print value at index) 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> num = {1, 2, 3, 4};
//     cout<<num.at(0); // same as num[0]
//     return 0;
// }