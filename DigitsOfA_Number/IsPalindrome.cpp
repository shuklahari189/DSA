#include <iostream>

int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    int numCPY = num;
    int reversedNum = 0;
    for(;num != 0;)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if(numCPY == reversedNum)
    {
        printf("%d is Palindrome.", numCPY);
    }
}