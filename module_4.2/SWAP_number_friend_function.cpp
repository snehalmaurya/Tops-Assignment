// Write a program to swap the two numbers using friend function without using third variable

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

        cout << "before swapping:" << endl
             << a << "\t" << b;
    }

    friend void swap(A obj);
};

void swap(A obj)
{
    obj.a = obj.a * obj.b;
    obj.b = obj.a / obj.b;
    obj.a = obj.a / obj.b;
    cout << "\nafter swapping:" << endl
         << obj.a << "\t" << obj.b;
}
int main()
{

    A aa;

    swap(aa);
}