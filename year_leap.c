// WAP to check if the given year is leap year or not
#include <stdio.h>
void main()
{
    int Year;
    printf("Enter any year:");
    scanf("%d", &Year);

    if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
    {
        printf("Yehh it is leap year");
    }
    else
    {
        printf("Ohh it is not leap year");
    }
}