/*
 Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include <iostream>
using namespace std;
class Bank
{
private:
    string name, typeOfAccount;
    int accountNumber, balance, depositeAmount, wihdrawAmount;

public:
    void AssignValues()
    {
        cout << "Name of the depositor:";
        cin >> name;
        cout << "Type of Account:";
        cin >> typeOfAccount;
        cout << "Account Number:";
        cin >> accountNumber;
        cout << "Balance amount in the account:";
        cin >> balance;
    }
    void DepositedAmount()
    {
        cout << "Enter deposite amount :";
        cin >> depositeAmount;
        balance = balance + depositeAmount;
        cout << "\ncurrent balance in account " << balance;
    }

    void WithdrawAmount()
    {
        cout << "\nEnter withdraw amount :";
        cin >> wihdrawAmount;
        balance = balance - wihdrawAmount;
    }

    void Display()
    {
        cout << "\nName of the depositor:" << name;

        cout << "\nCurrent balance in account:" << balance;
    }
};
int main()
{
    Bank b;
    b.AssignValues();
    b.DepositedAmount();
    b.WithdrawAmount();
    b.Display();
}