#include <stdio.h>
int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int pos = 2;
    int ele = 32;
    for (int i = 4; i >=pos-1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos-1]=32;
    for(int i=0;i<=5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

