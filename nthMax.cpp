#include <iostream>

int nMax(int *arr, int size, int n)
{
    int nArray[100];
    for (int i = 0; i < size; i++)
    {
        nArray[i] = arr[0];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > nArray[0])
        {
            for (int i = n - 1; i > 0; i--)
            {
                nArray[i] = nArray[i - 1];
            }
            nArray[0] = arr[i];
        }
    }
    return nArray[n - 1];
}

int main()
{
    int arr[] = {1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int);
    int n = 3;
    printf("%d", nMax(arr, size, n));
}