#include<iostream>
using namespace std;
class Bank{
    private:

    string user_name;
    int cvv;
    string password;
    int acc_number;

    public:
    string name;
    void set_acc_number(int n){
        acc_number=n;
    }
    void get_acc_number(){
        cout<<"The account number is "<<acc_number<<endl;
    }
    void setall(string m,string u,int c,string pass){
        user_name=m;
        name=u;
        cvv=c;
        password=pass;
        
    }
    void getall(){
        cout<<"Your Bank Details are "<<endl;
        cout<<"User_Name : "<<user_name<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Account Number : "<<acc_number<<endl;
        cout<<"Cvv : "<<cvv<<endl;
        cout<<"Password : "<<password<<endl;
    }

};

int main(){
    Bank b;
    b.name="Corpze";
    b.set_acc_number(12134);
    b.get_acc_number();
    b.setall("Corpze","Diwakar Sharma",784,"Gc7HYdwk8");
    b.getall();
    return 0;
}