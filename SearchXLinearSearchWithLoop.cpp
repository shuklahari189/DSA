#include <iostream>

int searchX(int *arr, int size, int num)
{
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == num)
        {
            return index;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    printf("%d", searchX(arr, size, 1));
}