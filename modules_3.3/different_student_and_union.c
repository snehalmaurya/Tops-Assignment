// WAP to show difference between Structure and Union
/*
--> STRUCTURE: Structure is  a user defined data type, in which different type of data is grouped together.
--> In the Structure data stored in different memory location.
--> UNINON: Union is a user defined data type in which all the data shares stored in same memory location.
*/
// Enter 3 student information using structure of array.
#include <stdio.h>
#define n 3
struct Student
{
    int roll_no;
    char name[100];
    int reg_no;
    char branch[100];
} s[n];

void main()
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter roll number:");
        scanf("%d", &s[i].roll_no);

        printf("Enter name:");
        scanf("%s", &s[i].name);

        printf("Enter register number:");
        scanf("%d", &s[i].reg_no);

        printf("Enter branch name:");
        scanf("%s", &s[i].branch);
    }

    printf("\n---------Details of students---------");

    for (int i = 0; i < n; i++)
    {
        printf("\nRoll number: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nRegister number: %d", s[i].reg_no);
        printf("\nBranch name: %s", s[i].branch);
        printf("\n");
    }
}