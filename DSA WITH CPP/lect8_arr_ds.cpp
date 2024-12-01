
// SMALLEST IN ARRAY

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

// LARGEST IN ARRAY
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

// MIN AND MAX FUNTION
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
