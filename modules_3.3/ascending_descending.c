// WAPto take two array input from user and sort them in ascending  or descending order as per user's choice
#include <stdio.h>
#define n 2
void main()
{
    int a[n], sort;
    for (int i = 0; i < n; i++)
    {

        printf("Enter the no: ");
        scanf("%d", &a[i]);
    }

    printf("Select your option\n for acend=1\nfor decend=2\n");
    scanf("%d", &sort);
    switch (sort)
    {
    case 1:
        printf("No's in  Acending order ");
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                if (a[row] < a[col])
                { // swaping
                    int temp = a[row];
                    a[row] = a[col];
                    a[col] = temp;
                }
            }
        }

        break;
    case 2:
        printf("No's in Decending order ");
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                if (a[row] > a[col])
                {
                    int temp = a[row];
                    a[row] = a[col];
                    a[col] = temp;
                }
            }
        }

        break;
    default:
        printf("Plzz select 1 or 2");
        break;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
}