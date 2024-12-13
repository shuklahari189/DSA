#include <iostream>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int reversedNum = 0;
    for(;num != 0;)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    printf("%d", reversedNum);
}