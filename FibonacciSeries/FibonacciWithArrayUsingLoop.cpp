#include <iostream>
#define MAX 100

int main()
{
    int index = 0;
    printf("Enter index: ");
    scanf("%d", &index);
    int fib[MAX];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= index; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%d", fib[index]);
}