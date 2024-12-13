#include <iostream>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sumOfDigits = 0;
    while(num != 0)
    {
        int digit = num % 10;
        sumOfDigits += digit;
        num /= 10;
    }
    printf("%d", sumOfDigits);
}