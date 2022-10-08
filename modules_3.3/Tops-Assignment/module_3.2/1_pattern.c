#include <stdio.h>
void main()
{
    int a = 0, b = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col % 2 == 0)
            {
                printf("%d", a);
            }
            else
                printf("%d", b);
        }
        printf("\n");
    }
}