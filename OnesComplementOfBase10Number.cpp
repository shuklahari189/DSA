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
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans = 0;
    int i = 0;
    if (num == 0)
    {
        ans = 1;
    }
    while (num != 0)
    {
        int x = !(num % 2);
        ans = ans + x * pow(2, i);
        i++;
        num /= 2;
    }
    printf("%d", ans);
}