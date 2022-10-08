/*Create a class person having members name and age.
 Derive a class student having member percentage.
 Derive another class teacher having member salary.
 Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */

#include <iostream>
using namespace std;
class student
{
protected:
    float percentage;

public:
    void setPercentage()
    {
        cout << "enter percentage:";
        cin >> percentage;
    }
    void getPercentage()
    {
        cout << "percentage:" << percentage << endl;
    }
};
class Teacher
{
protected:
    long int salary;

public:
    void setSalary()
    {
        cout << "enter salary:";
        cin >> salary;
    }
    void getSalary()
    {
        cout << "salary:" << salary << endl;
    }
};
class Person : public student, public Teacher
{
private:
    string name;
    int age;

public:
    void setPerson()
    {
        cout << "enter name:";
        getline(cin, name);
        cout << "enetr age:";
        cin >> age;
    }
    void getPerson()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
    }
};
int main()
{
    Person p;
    p.setPerson();
    p.setPercentage();
    p.setSalary();
    p.getPerson();
    p.getPercentage();
    p.getSalary();
}