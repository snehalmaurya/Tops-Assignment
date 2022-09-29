// WAP of structure employee that provides the following information -print and display
// empno,empname,address,and age
#include <stdio.h>
struct employee_information

{
    int employee_no;
    char employee_name[100];
    char employee_address[100];
    int employee_age;
} e;
void main()
{
    printf("Enter the employee no:");
    scanf("%d", &e.employee_no);

    printf("Enter the employee name:");
    scanf("%s", &e.employee_name);

    printf("Enter the employee address:");
    fgets(e.employee_address, 100, stdin);
    scanf("%s", &e.employee_address);

    printf("Enter the employee age:");
    scanf("%d", &e.employee_age);

    printf("\n------Employee_information------");
    printf("\nEmployee no:%d", e.employee_no);
    printf("\nEmployee name:%s", e.employee_name);
    printf("\nEmployee address:%s", e.employee_address);
    printf("\nEmployee age:%d", e.employee_age);
}
Footer
