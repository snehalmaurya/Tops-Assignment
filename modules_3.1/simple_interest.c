// WAP to find simple intrest
#include <stdio.h>
void main()
{
    int principal, rate, time, simple_interest;
    printf("Enter the  balance:");
    scanf("%d", &principal);

    printf("Enter the interest rate:");
    scanf("%d", &rate);

    printf("Enter the time:");
    scanf("%d", &time);

    simple_interest = principal * rate * time;
    printf("%d\n", simple_interest);
}