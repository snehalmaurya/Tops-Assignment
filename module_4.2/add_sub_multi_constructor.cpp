// Write a program of Addition, Subtraction, Division, Multiplication using constructor
#include <iostream>
using namespace std;
class Calc
{
private:
    float num1, num2;
    int user_select_no;

public:
    Calc()
    {

        cout << "1=addition \n 2=substraction\n 3=multiplication\n 4=division\n";
        cout << "Select above no: \n";
        cin >> user_select_no;
        switch (user_select_no)
        {
        case 1:
            addition();
            break;
        case 2:
            substraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            Divison();
            break;

        default:
            cout << "select 1 to 4 number";
            break;
        }
    }
    void addition()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nAddition:" << num1 + num2;
    }

    void substraction()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nsubstraction:" << num1 - num2;
    }

    void multiplication()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nmultiplication:" << num1 * num2;
    }

    void Divison()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nDivison:" << num1 / num2;
    }
};
int main()
{
    Calc c;
}