// Write a program to find the multiplication values and the cubic values using inline function
#include <iostream>
#include <cmath>
using namespace std;
inline void multi(int a, int b)
{
    cout << "Multiplicatin is :" << a * b << endl;
}

inline void cube(int a)
{
    cout << "cube is :" << pow(a, 3) << endl;
}

int main()
{
    multi(20, 10);
    cube(3);
}

