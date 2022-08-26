// WAP to find out the max from given num
#include <stdio.h>
void main()
{
    int no, rem, max = 0;

    printf("Enter the no: ");
    scanf("%d", &no);

    while (no > 0)
    {
        rem = no % 10;
        no = no / 10;
        if (max < rem)
        {
            max = rem;
        }
    }
    printf("%d", max);
}