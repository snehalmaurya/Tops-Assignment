// WAP to find simple intrest
#include <stdio.h>
void main()
{
    float principal, rate, time, simple_interest;
    printf("Enter the  balance:");
    scanf("%f", &principal);

    printf("Enter the interest rate:");
    scanf("%f", &rate);

    printf("Enter the time:");
    scanf("%f", &time);

    simple_interest = (principal * rate * time)/100;
    printf("%f\n", simple_interest);
}
