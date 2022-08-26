// WAP to print factorial no of givern num
#include <stdio.h>
void main()
{
    int no, fact = 1;

    printf("Enter thr no:");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of no is: %d", fact);
}