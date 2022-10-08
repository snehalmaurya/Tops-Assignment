/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading.
*/
#include <iostream>
using namespace std;
class A
{
public:
    int math(int a, int b)
    {
        return a + b;
    }

    double math(double a, double b)
    {
        return a - b;
    }

    double math(int a, double b)
    {
        return a * b;
    }

    double math(double a, int b)
    {
        return a / b;
    }
};
int main()
{
    A a;
    cout << "Addition:" << a.math(23, 20);
    cout << "\nSubstraction:" << a.math(23.6, 40.5);
    cout << "\nMultiplication:" << a.math(23, 30.5);
    cout << "\nDivision:" << a.math(23.5, 3);
}