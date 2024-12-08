#include <iostream>

int main()
{
    int num = 0;
    for(int i = 1; i < 5; i++)
    {
        num = num * 10 + i;
    }
    printf("%d", num);
}