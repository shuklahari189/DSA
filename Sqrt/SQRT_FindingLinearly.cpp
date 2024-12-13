#include <iostream>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int sqrt = 0;
    for(int i = 0; i <= num; i++)
    {
        if(i * i <= num)
        {
            sqrt = i;
        }
    }
    printf("%d", sqrt);
}