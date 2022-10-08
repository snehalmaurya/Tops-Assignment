/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
 Rectangle: Length * breadth
 Triangle: ½ *base* height
 Circle: Pi * radius *radius
*/

#include <iostream>
using namespace std;
class A
{
public:
    int area(int length, int breadth)
    {
        return (length * breadth);
    }

    double area(float base, double height, float constant = 0.5)
    {
        return (constant * base * height);
    }

    float area(int radius)
    {
        float pi = 3.14;
        return (pi * radius * radius);
    }
};
int main()
{
    A aa;
    cout << "Area of Rectangle: " << aa.area(10, 20) << endl;
    cout << "Area of Triangle: " << aa.area(10.24, 20.7) << endl;
    cout << "Area of Circle: " << aa.area(2);
}