// WAP to find num is even or odd using ternary operator
#include <stdio.h>
void main()
{

    int no;
    printf("Enetr the no : ");
    scanf("%d", &no);

    no % 2 == 0 ? printf("no is even") : printf("no is odd");
}