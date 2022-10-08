/*Assume a class cricketer is declared.
 Declare a derived class batsman from cricketer.
  Data member of batsman--> Total runs, Average runs and best performance.
 Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include <iostream>
using namespace std;
class Cricketer
{
protected:
    string name;
    int runOfTestMatch1, runOfTestMatch2, runOfTestMatch3;

public:
    void getdeails()
    {
        cout << "Enter the name of Cricketer: ";
        cin >> name;

        cout << "Enter the run of test match 1st: ";
        cin >> runOfTestMatch1;

        cout << "Enter the run of test match 2nd: ";
        cin >> runOfTestMatch2;

        cout << "Enter the run of test match 3rd: ";
        cin >> runOfTestMatch3;
    }
};
class Batsman : public Cricketer
{
private:
    int totalRun, averageRun, bestPerformance;

public:
    void inputData()
    {
        totalRun = runOfTestMatch1 + runOfTestMatch2 + runOfTestMatch3;
        averageRun = totalRun / 3;
    }

    void printDetails()
    {
        cout << "Total run of cricketer :" << totalRun << endl;
        cout << "Total average run :" << averageRun << endl;
    }

    int totalrun()
    {
        return totalRun;
    }

    string getName()
    {
        return name;
    }
};
int main()
{
    int totalCricketer, maxRun;

    cout << "Total cricketers: ";
    cin >> totalCricketer;

    Batsman b[totalCricketer];
    for (int i = 0; i < totalCricketer; i++)
    {
        b[i].getdeails();
        b[i].inputData();
    }

    for (int i = 0; i < totalCricketer; i++)
    {
        cout << endl;
        cout << "Details of cricketer: " << i + 1 << endl;

        b[i].printDetails();
    }

    maxRun = b[0].totalrun();
    string name = b[0].getName();
    for (int i = 0; i < totalCricketer; i++)
    {
        if (maxRun < b[i].totalrun())
        {
            name = b[i].getName();
            maxRun = b[i].totalrun();
        }
    }

    cout << endl
         << "Best Perfomer: " << name << " " << maxRun;
}