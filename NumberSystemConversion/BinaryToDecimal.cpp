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
    int binary = 0;
    printf("Enter the binary: ");
    scanf("%d", &binary);
    int decimal = 0;
    int i = 0;
    while (binary != 0)
    {
        // printf("%d %d %d\n", decimal, binary % 10, pow(2, i));
        decimal += (binary % 10) * pow(2, i);
        i++;
        binary /= 10;
    }
    printf("%d", decimal);
}