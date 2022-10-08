/* C++ Program to Show Overload Constructor Example  
Value of a: 5
Value of b: 0
Value of c: 0
Value of a: 0
Value of b: t
Value of c: 0
Value of a: 0
Value of b: 0
Value of c: 3.14
Value of a: 4
Value of b: y
Value of c: 3.45*/
#include<iostream>
using namespace std;
class A{
    public:
A(int a,int b,int c){
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
cout<<"Value of c:"<<c<<endl;
}
A(int a,char b,int c){
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
cout<<"Value of c:"<<c<<endl;
}
A(int a,int b,double c){
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
cout<<"Value of c:"<<c<<endl;
}
A(int a,char b,double c){
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
cout<<"Value of c:"<<c<<endl;
}
};
int main(){
A a(5,0,0);
cout<<endl;
A b(0,'t',0);
cout<<endl;
A c(0,0,3.14);
cout<<endl;
A d(4,'y',3.14);
}