#include<iostream>
using namespace std;
class Area_of_rectangle{
    private:
    int l,w;
    public:
    Area_of_rectangle(){
        cout<<"\nenter length:";
        cin>>l;
        cout<<"\nenter width:";
        cin>>w;
        cout<<"in default constructor"<<endl;
 }
 void volume(){
    cout<<"volume of box:"<<l*w<<endl;
 }
};
int main(){
    Area_of_rectangle a;
    a.volume();
}