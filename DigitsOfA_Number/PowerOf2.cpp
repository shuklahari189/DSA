#include <iostream>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int numOf1Bits = 0;
    for(;num != 0;)
    {
        int bit = num % 2;
        numOf1Bits += bit;
        num /= 2;
    }
    if(numOf1Bits > 1)
    {
        printf("Not power of 2.");
    }
    else
    {
        printf("Power of 2.");
    }
}