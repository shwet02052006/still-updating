#include <iostream>
using namespace std;

int main()
{
    int num[10] = {2, 6, 5, 7, 3, 9, 10, 1, 4};
    cout << "numbers which are not arranged yet " << endl;
    for (int i = 0; i <= 10; i++)
    {

        cout << num[i] << "    "<<endl;

        for (int i = 0; i < 9; i++)
        {

            for (int j = 0; j < 9 - i; j++)
            {
                if (num[j] > num[j + 1])
                {
                    int temp = num[j + 1];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
    }
    cout << "asc order " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << "  ";
    }
    return 0;
}