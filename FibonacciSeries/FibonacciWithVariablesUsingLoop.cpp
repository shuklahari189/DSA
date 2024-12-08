#include <iostream>

int main()
{
    int index = 0;
    printf("Enter index: ");
    scanf("%d", &index);
    int i1 = 0;
    int i2 = 1;
    for (int i = 0; i < index; i++)
    {
        int i2Before = i2;
        i2 = i1 + i2;
        i1 = i2Before;
    }
    printf("%d", i1);
}