// wap tp print fibonacci series up to given num
#include <stdio.h>
void main()
{
    int no, i, a = 0, b = 1, fibo;

    printf("Enter the no:");
    scanf("%d", &no);
    printf("%d ", a);
    printf("%d ", b);
    for (i = 1; i <= no; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
        printf("%d ", fibo);
    }
}