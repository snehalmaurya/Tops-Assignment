// WAP of uninon.
#include <stdio.h>
struct Student
{
    int roll_no;
    char name[100];
    int reg_no;
    char branch[100];
} s;

void main()
{

    printf("Enter roll number:");
    scanf("%d", &s.roll_no);

    printf("Enter name:");
    scanf("%s", &s.name);

    printf("Enter register number:");
    scanf("%d", &s.reg_no);

    printf("Enter branch name:");
    scanf("%s", &s.branch);

    printf("\n---------Detail of student---------");

    printf("\nRoll number: %d", s.roll_no);
    printf("\nName: %s", s.name);
    printf("\nRegister number: %d", s.reg_no);
    printf("\nBranch name: %s", s.branch);
    printf("\n");
}