// WAP to find factorial using recursion
#include <stdio.h>
int fact(int f)
{

    if (f != 0)
    {
        return (f * fact(f - 1));
    }
    else
        return 1;
}
void main()
{

    int no;
    printf("Enter the number for factorial:");
    scanf("%d", &no);
    printf("Factorial is:%d", fact(no));
}