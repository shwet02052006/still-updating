// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = (n - i); k > 0; k--)
//             cout << " ";
//         for (int j = 0; j < i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//          *
//         * *
//        * * *
//       * * * *
//      * * * * *
//     * * * * * *
//    * * * * * * *
//   * * * * * * * *
//  * * * * * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i <n; i++)
//     {
//        char ch='A';
//         for (int j = 0; j <n;j++)
//         {
//              cout << ch << "\t";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// A       B       C       D       E
// A       B       C       D       E
// A       B       C       D       E
// A       B       C       D       E
// A       B       C       D       E

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int num=1;
 
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
      
//         for (int j = 1; j <= n;j++)
//         {
//              cout <<num <<"\t";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// 1       2       3
// 4       5       6
// 7       8       9

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
   
 
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//        int num=1;
//         for (int j = 1; j <= n;j++)
//         {
//              cout <<num <<"\t";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1       2       3       4       5
// 1       2       3       4       5
// 1       2       3       4       5
// 1       2       3       4       5
// 1       2       3       4       5



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
   
 
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
      
//         for (int j = 0; j <= i;j++)
//         {
//              cout << "* ";
            
//         }
//         cout << endl;
//     }
//     return 0;
// }
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int num=1;
   
 
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i;j++)
//         {
//              cout <<num <<" ";
           
//         }
//         num++;
//         cout << endl;
//     }
//     return 0;
// }
// 1
// 2       2
// 3       3       3
// 4       4       4       4
// 5       5       5       5       5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     char ch ='A';
   
 
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i;j++)
//         {
//              cout <<ch <<" ";
           
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }
// A
// B B
// C C C
// D D D D
// E E E E E
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
   
 
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//        int num=1;
//         for (int j = 1; j <= i;j++)
//         {
//              cout <<num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i+1; j > 0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
// int num=1;
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j <=i; j++)
//         {
//             cout <<num  << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
// char ch='A';
//     cout << "Enter the value of n :" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j <=i; j++)
//         {
//             cout <<ch  << " ";
//            ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// A
// B C
// D E F
// G H I J
// #include <iostream>
// using namespace std;

// int main()
// {int num=1;
//     int n = 5;
//     for (int i = n; i > 0; i--)
//     {
       
//         for (int k = n - i; 0 < k; k--)
//         {

//             cout << " ";
//         }

//         for (int j = i; j > 0; j--)
//         { 
//             cout << num;
           
//         } 
//         num++;
        
//         cout << "\n";
//     }
//     return 0;
// }
// 11111
//  2222
//   333
//    44
//     5
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 'A';
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {

//         for (int k = 0; k <=i; k++)
//         {

//             cout << " ";
//         }
//         for (int j = n - i; j > 0; j--)
//         {

//             cout <<ch;
//         }
//         ch++;
//         cout << endl;
//     }

//     return 0;
// } 
//  AAAA
//   BBB
//    CC
//     D