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
    int decimal = 0;
    printf("Enter the decimal: ");
    scanf("%d", &decimal);
    int binary = 0;
    int i = 0;
    while (decimal != 0)
    {
        int bit = decimal % 2;
        binary = binary + bit * pow(10, i++);
        decimal /= 2;
    }
    printf("%d", binary);
}