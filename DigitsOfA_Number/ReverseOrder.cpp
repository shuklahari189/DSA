#include <iostream>

int pow(int base, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int num = 0;
    for (int i = 1; i < 5; i++)
    {
        num = num + (i * pow(10, i - 1));
        // printf("%d  %d  %d  %d\n", i, i - 1, pow(10, i - 1), (i * pow(10, i - 1) ));
    }
    printf("%d", num);
}