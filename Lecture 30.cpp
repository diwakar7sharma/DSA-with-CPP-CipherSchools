#include<iostream>
using namespace std;
class New_account{
    public:
    int amount;
    int days;
    
    //No return type for constructor
    New_account(int a=0,int d=0){
        amount=a;
        days=d;
        cout<<"Constructor Called !"<<endl;
    }
    ~New_account(){
        cout<<"Destructor is Called."<<endl;
    }
    void getdetails(){
        cout<<"The amount is "<<amount<<endl;
        cout<<"The number of days are "<<days<<endl;
    }
};

int main(){
    New_account n;
    n.getdetails();
    New_account x(900,6);
    x.getdetails();
    New_account y(5000,10);
    y.getdetails();
    return 0;
}