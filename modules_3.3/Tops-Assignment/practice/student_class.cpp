#include<iostream>
using namespace std;
class student{
    private:
    string name;
    public:
    student(){
        cout<<"student name:unknown"<<endl;
    }
    student(string name){
        name=name;
        cout<<"student name:"<<name<<endl;
    }
};
    int main(){
    student s;
    student("snehal");
    }

