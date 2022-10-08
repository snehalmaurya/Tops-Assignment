// WAP to take 10 no input from user and find out..
// How many even num are there
// How many odd num are there
// sum of even num
// sum of odd num
#include <stdio.h>
void main()
{
    int no, Total_even_no = 0, Total_odd_no = 0, sum_of_even = 0, sum_of_odd = 0;

    printf("Enter the no: \n");

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &no);

        if (no % 2 == 0)
        {
            Total_even_no = Total_even_no + 1;
            sum_of_even = sum_of_even + no;
        }
        else
        {
            Total_odd_no = Total_odd_no + 1;
            sum_of_odd = sum_of_odd + no;
        }
    }
    printf("Total_even_no= %d\n", Total_even_no);
    printf("Sum of even no %d\n\n", sum_of_even);
    printf("Total_odd_no= %d\n", Total_odd_no);
    printf("Sum of odd no %d\n", sum_of_odd);
}

