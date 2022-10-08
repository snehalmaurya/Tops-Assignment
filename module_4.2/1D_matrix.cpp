/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include <iostream>
#define N 2
using namespace std;

class matrix
{
    int a[10];

public:
    void accept_val()
    {
        for (int i = 0; i < N; i++)
        {
            cout << "enter the val:";
            cin >> a[i];
        }
    }

    void dispaly()
    {
        for (int i = 0; i < N; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }

    void operator+(matrix m)
    {
        int res[10];
        for (int i = 0; i < N; i++)
        {
            res[i] = a[i] + m.a[i];
        }

        for (int i = 0; i < N; i++)
        {
            cout << res[i] << "\t";
        }
    }
};
int main()
{
    matrix obj1;
    matrix obj2;
    obj1.accept_val();
    obj2.accept_val();
    obj1.dispaly();
    obj2.dispaly();
    obj1 + obj2; // obj1.sub(obj2)
}
Footer
