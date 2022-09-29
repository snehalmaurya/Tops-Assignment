// WAP to find reverse of string using recursion
#include <stdio.h>
void string(char *ptr)
{
    if (*ptr)
        string(ptr + 1);
    printf("%c", *ptr);
}

void main()
{
    char ch[100];
    printf("Enter the string:");
    scanf("%s", &ch);
    string(ch);
}