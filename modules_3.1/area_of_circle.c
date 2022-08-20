/ WAP to find area of circle
#include <stdio.h>
#define pi 3.14
void main()
{
    float redius, area_of_circle;
    printf("Enter the value of redius: ");
    scanf("%f", &redius);

    area_of_circle = pi * redius * redius;
    printf("Ans:%f", area_of_circle);
}
