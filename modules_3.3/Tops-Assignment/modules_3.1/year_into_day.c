// WAP to convert years into days and days into year
#include <stdio.h>
void main()
{
    float year, days;
    printf("Enter the no of year: ");
    scanf("%f", &year);

    days = year * 365;
    printf("Years into days: %f\n", days);
    // reset value of days, year
    days, year = 0;

    printf("Enter the no of days:");
    scanf("%f", &days);

    year = days / 365;
    printf("Days into year: %f", year);
}