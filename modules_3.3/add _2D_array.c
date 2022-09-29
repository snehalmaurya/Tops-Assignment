// WAP to make addition of two matrix using 2-D array
#include <stdio.h>
#define n 2
void main()
{
    int a[n][n] = {{1, 2}, {-4, 6}};
    int b[n][n] = {{7, 8}, {5, 9}};
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
Footer
