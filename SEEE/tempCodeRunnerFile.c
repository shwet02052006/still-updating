void print_arr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d \n ", arr[i]);
    }
}
void reverse_arr(int arr[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n ", arr[i]);
    }
}

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};

    print_arr(a, 6);

    reverse_arr(a, 6);
    printf("Elements after reverse :\n");
    print_arr(a, 6);

    return 0;
}