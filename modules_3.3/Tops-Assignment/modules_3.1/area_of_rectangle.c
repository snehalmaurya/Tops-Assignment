// WAP to find area of rectangle
#include <stdio.h>
void main()
{
    int length, width, Area_of_rectangle;

    printf("Enter the value of length: ");
    scanf("%d", &length);

    printf("Enter the value of width: ");
    scanf("%d", &width);

    Area_of_rectangle = length * width;
    printf("Ans:%d", Area_of_rectangle);
}