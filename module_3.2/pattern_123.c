#include <stdio.h>

void main()
{
    int no = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            no = 1 + no;
            printf("%d  ", no);
        }
        printf("\n");
    }
}