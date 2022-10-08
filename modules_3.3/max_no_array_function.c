// WAP to find out the max num from gievn array using function
#include <stdio.h>
#define n 5
void max_no(int a[n]);
void main()
{
    int a[n];

    printf("Enter the number:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max_no(a);
}
void max_no(int a[n])
{
    int max = 0;
    max = a[0];
    for (int j = 0; j < n; j++)
    {
        if (max < a[j])
        {
            max = a[j];
        }
    }
    printf("\nMax number is:%d", max);
}