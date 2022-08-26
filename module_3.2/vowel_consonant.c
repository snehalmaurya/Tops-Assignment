// WAP to show vowel and consonant using switch case

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if ('A' == ch || ch == 'a' || 'E' == ch || 'e' == ch || 'I' == ch || 'i' == ch || 'O' == ch || 'o' == ch || 'U' == ch || 'u' == ch)
    {
        printf("This is vowel");
    }
    else
    {
        printf("This is consonant");
    }
}