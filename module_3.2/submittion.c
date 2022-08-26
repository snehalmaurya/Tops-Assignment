// WAP to make a submittion of a given number

#include <stdio.h>
void main()
{
    int no, sum = 0, rem;
    printf("Enter the no: ");
    scanf("%d", &no);
    for (int i = 1; i <= 5; i++)
    {
        rem = no % 10;
        no = no / 10;

        sum = sum + rem;
    }
    printf("\n %d", sum);
}