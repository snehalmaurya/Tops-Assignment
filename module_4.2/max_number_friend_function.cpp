// Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    A()
    {
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
    }

    friend int max(A obj);
};

int max(A obj)
{
    return obj.a > obj.b ? obj.a : obj.b;
}
int main()
{

    A a;
    cout << endl
         << "max:" << max(a);
}