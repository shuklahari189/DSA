#include <iostream>

void reverseArray(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int i0 = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = i0;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    reverseArray(arr, size);
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}