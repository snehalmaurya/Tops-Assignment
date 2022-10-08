#include <stdio.h>
void main()
{
    char ch = 'A';
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}

