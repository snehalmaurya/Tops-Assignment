// WAP to print number in revers order

#include <stdio.h>
void main()
{
    int no, rem;
    printf("Enter the no= ");
    scanf("%d", &no);
    while (no > 0)
    {

        rem = no % 10;
        no = no / 10;
        printf("%d", rem);
    }
}