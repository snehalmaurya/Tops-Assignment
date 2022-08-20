// WAP to find area of triangle
#include <stdio.h>
void main()
{
    int height, base, Area_of_triangle;

    printf("Enter the value of height: ");
    scanf("%d", &height);

    printf("Enter the value of base: ");
    scanf("%d", &base);

    Area_of_triangle = height * base / 2;
    printf("Ans:%d", Area_of_triangle);
}