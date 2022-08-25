// WAP to make simple calculator

#include <stdio.h>
void main()
{
    int user_select_no;
    float num1, num2, ans;

    printf("1=addition \n 2=substraction\n 3=multiplication\n 4=division\n 5=modulo\n");
    printf("Select above no: \n");
    scanf("%d", &user_select_no);
    printf("plz enter 1st no: ");
    scanf("%f", &num1);

    printf("plz enter 2st no: ");
    scanf("%f", &num2);
    if (user_select_no == 1)
    {
        ans = num1 + num2;
    }
    else if (user_select_no == 2)
    {
        ans = num1 - num2;
    }
    else if (user_select_no == 3)
    {
        ans = num1 * num2;
    }
    else if (user_select_no == 4)
    {
        ans = num1 / num2;
    }
    else if (user_select_no == 5)
    {
        ans = (int)num1 % (int)num2;
    }
    else
    {
        printf("plz enter right no");
    }
    printf("your ans is:%f", ans);
}

