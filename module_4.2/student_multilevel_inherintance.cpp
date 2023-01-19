/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)
*/
#include <iostream>
using namespace std;
class Students
{
protected:
    int roll_no;

public:
    void getdetails()
    {
        cout << "Enter the roll number:" << endl;
        cin >> roll_no;
    }
};
class Test : public Students
{
protected:
    int marks1stsub, marks2ndsub;

public:
    void getmarks()
    {
        cout << "Enter the subject 1st marks:" << endl;
        cin >> marks1stsub;

        cout << "Enter the subject 2nd marks:" << endl;
        cin >> marks2ndsub;
    }
};
class Result : public Test
{
protected:
    int totalMarks;

public:
    void marks()
    {
        totalMarks = marks1stsub + marks2ndsub;
        cout << "Marks in the test :" << totalMarks << endl;
    }
};
int main()
{
    Result r[3];
    for (int i = 0; i < 3; i++)
    {

        r[i].getdetails();
        r[i].getmarks();
    }
    for (int i = 0; i < 3; i++)
    {

        r[i].marks();
    }
}