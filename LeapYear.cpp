#include <iostream>

int isLeap(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("%d", isLeap(year));
}