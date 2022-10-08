// WAp to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>
#define c 100
void main()
{
    char str[c], rev_str[c];
    printf("Enter the string:");
    scanf("%s", &str);

    strcpy(rev_str, str);
    strrev(rev_str);

    if (strcmp(str, rev_str) == 0)
    {
        printf("\nString is palindrome");
    }
    else
        printf("\nString is not palindrome");
}