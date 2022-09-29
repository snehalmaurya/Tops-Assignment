// WAP to swap two numbers without using third variable

#include <stdio.h>
void main()
{
    int a, b;

    printf("Enter the value of a:\n a=: ");
    scanf("%d", &a);

    printf("Enter the value of b:\n b=: ");
    scanf("%d", &b);
    a = a + b;

    b = a - b;

    a = a - b;
    printf(" Swapt of a and b value \na is:%d\t b is:%d\n", a, b);
}
