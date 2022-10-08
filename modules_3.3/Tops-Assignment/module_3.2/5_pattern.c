#include <stdio.h>
void main()
{
    int ch = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", ch);
            ch++;
        }
        printf("\n");
    }
}