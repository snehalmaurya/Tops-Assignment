// WAP to print table up to given number

#include <stdio.h>
void main()
{
    int no, i = 1;
    printf("Enter any no:");
    scanf("%d", &no);
    for (i; i <= 10; i++)
    {
        printf("%d*%d=%d\n", no, i, no * i);
    }
}