// WAP to make simple calculator using switch case

#include <stdio.h>
void main()
{
    int user_select_no;
    float num1, num2, ans = 0;

    printf(" enter 1st no: ");
    scanf("%f", &num1);

    printf(" enter 2st no: ");
    scanf("%f", &num2);

    printf("1=addition \n 2=substraction\n 3=multiplication\n 4=division\n 5=modulo\n");
    printf("Select above no: \n");
    scanf("%d", &user_select_no);

    switch (user_select_no)
    {
    case 1:

        ans = num1 + num2;
        printf("your ans is:%f", ans);
        break;

    case 2:
        ans = num1 - num2;
        printf("your ans is:%f", ans);
        break;

    case 3:
        ans = num1 * num2;
        printf("your ans is:%f", ans);
        break;

    case 4:
        ans = num1 / num2;
        printf("your ans is:%f", ans);
        break;

    case 5:
        ans = (int)num1 % (int)num2;
        printf("your ans is:%f", ans);
        break;
    default:
        printf("plz enter right no");
        break;
    }
}