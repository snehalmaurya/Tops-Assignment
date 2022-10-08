// WAP to make multiplication of two matrix using 2-D array
#include <stdio.h>
void main()
{
    int a[2][3] = {{1, 2, 3}, {8, 5, 0}};
    int b[3][1] = {{7}, {5}, {3}};
    int c[2][1], sum = 0;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + a[j][k] * b[k][i];
            }
            c[j][i] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}