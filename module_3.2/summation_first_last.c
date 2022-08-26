// WAP to make summation of first and last digit
#include <stdio.h>
void main()
{

    int no[5], sum = 0;
    printf("Enter the no: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &no[i]);
    }
    sum = no[0] + no[4];
    printf("Sum of first and last: %d", sum);
}