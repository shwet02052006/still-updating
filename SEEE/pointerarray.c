#include <stdio.h>
int main()
{
    int a = 32;
    int *ptr = &a;
    printf("%d \n", *ptr);
    printf("%d\n", ptr);
    ptr++;
    //   ptr++;  or printf("%d\n ",ptr+1);

    printf("%d\n ", ptr);

    int arr[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    printf("%d\n", arr[0]);
    printf("%d\n", &arr[0]);
    printf("%d\n", arr); // hence &arr[0]=arr
    printf("%d\n", *(&arr[0]));
    printf("%d\n", *(arr));//for value at index 0
    return 0;
}
// pointer arithmatics
// ptr++ , ptr--