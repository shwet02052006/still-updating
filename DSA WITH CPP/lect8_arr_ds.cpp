
// SMALLEST IN ARRAY----------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {23, 32, 21, 90, 23, 12};
//     int size = 6;
//     int sml = INT8_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < sml)
//         {

//             sml = arr[i];
//         }
//     }

//     cout << "smallest=" << sml << endl;
//     return 0;
// }

// LARGEST IN ARRAY------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {23, 32, 21, 90, 23, 12};
//     int size = 6;
//     int lar=INT8_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > lar)
//         {

//         lar = arr[i];
//         }
//     }

//     cout << "largest=" << lar << endl;
//     return 0;
// }

// MIN AND MAX FUNTION-------------------------
//  #include <iostream>
//  using namespace std;
// int main()
// {
//     int arr[] = {23, 32, 21, 90, 23, 12};
//     int size = 6;
//     int sml = INT8_MAX;//sml will contain max infinity value
//     for (int i = 0; i < size; i++)
//     {
//       sml=min(arr[i],sml);
//     }

//     cout << "smallest=" << sml << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {23, 32, 21, 90, 23, 12};
//     int size = 6;
//     int sml = INT8_MAX; // sml will contain max infinity value
//     int lar = INT8_MIN; // lar will smallest
//     for (int i = 0; i < size; i++)
//     {
//         sml = min(arr[i], sml);
//         lar = max(arr[i], lar);
//     }

//     cout << "smallest=" << sml << endl;

//     cout << "largest=" << lar << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {23, 32, 21, 90, 23, 12};
//     int inds;
//     int indm;
//     int size = 6;
//     int sml = INT8_MAX; // sml will contain max infinity value
//     int lar = INT8_MIN; // lar will smallest
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < sml)
//         {
//             sml = arr[i];
//             inds = i;
//         }
//         if (arr[i] > lar)
//         {
//             lar = arr[i];
//             indm = i;
//         }
//     }

//     cout << "smallest=" << sml << "\t"<<inds<< endl;

//     cout << "largest=" << lar <<"\t"<< indm<<endl;
//     return 0;
// }

// LINEAR SEARCH-----------------
// #include <iostream>
// using namespace std;
// int ls(int arr[], int sz, int tar)
// {

//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] == tar)
//         {

//             return i;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {1,
//                  2,
//                  3,
//                  4,
//                  3,
//                  1,
//                  2};
//     int sz = 7;
//     int tr = 3;
//     cout << ls(arr, sz, tr) << endl;
//     return 0;
// }
// REVERSE ARRAY PRINT ------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1,
//                  2,
//                  3,
//                  4,
//                  3,
//                  1,
//                  2};
//     int j = 0;
//     int a[100];
//     for (int i = 6; i >= 0; i--)
//     {

//         cout << arr[i] << "\t";
//     }

//     return 0;
// }
// REVERSE ARRAY USING 2 POINTER METHOD

// #include <iostream>
// using namespace std;
// void rvsarr(int arr[], int sz)
// {
//     int start = 0;
//     int end = sz - 1;
//     while (start < end)

//         swap(arr[start], arr[end]);
// }

// void printar(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int ar[] = {1, 2, 3, 4, 5};
//     int size = sizeof(ar) / sizeof(ar[0]);
//     rvsarr(ar, size);
//     printar(ar, size);

//         return 0;
// }
// HOMEWORK
// sum of array
// #include <iostream>
// using namespace std;
// int sumar(int ar[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {

//         sum += ar[i];
//     }
//     return sum;
// }

// int main()
// {
//     int ar[] = {1, 2, 3, 4, 5};
//     int sz = sizeof(ar) / sizeof(ar[0]);
//     cout << sumar(ar, sz);
//     return 0;
// }

