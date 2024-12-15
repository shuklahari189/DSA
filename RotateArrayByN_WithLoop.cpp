#include <iostream>

void rotateN_Times(int *arr, int size, int n)
{
    n = n % size;
    int cpyArr[100];
    for (int i = size - n; i < size; i++)
    {
        cpyArr[i - (size - n)] = arr[i];
    }
    for (int i = size - 1; i >= n; i--)
    {
        arr[i] = arr[i - n];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = cpyArr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int n = 6;
    rotateN_Times(arr, size, n);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}