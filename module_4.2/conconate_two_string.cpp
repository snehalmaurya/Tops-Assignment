// Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <string.h>
using namespace std;

class Str
{
    char strVal[100];

public:
    void getVal()
    {
        cout << "Enter the a word:";
        gets(strVal);
    }

    void display()
    {
        cout << strVal << "\t";
    }

    void operator+(Str s)
    {
        strcat(strVal, s.strVal);
        cout << "\n"
             << strVal;
    }
};
int main()
{
    Str s1;
    Str s2;
    s1.getVal();
    s2.getVal();
    s1.display();
    s2.display();

    s1 + s2;
}