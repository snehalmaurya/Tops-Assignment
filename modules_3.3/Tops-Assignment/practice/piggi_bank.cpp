#include<iostream>
using namespace std;
class AddAmount{
    private:
    int amount=50;
    public:
    AddAmount(){
        cout<<"amount="<<amount<<endl;
 }
     AddAmount(int add_amount){
        cout<<"amount="<<amount+add_amount<<endl;
     }
};
int main(){
    AddAmount a;
    AddAmount d(12);
}
