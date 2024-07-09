#include<iostream>
using namespace std;

//"This" pointer stores address of the object
class Student{
    private:
    int roll;
    float percentage;
    public:
    string name;
    void setall(int roll,float percentage){
        this->roll=roll;
        this->percentage=percentage;
    }
    void getall(){
        cout<<name<<"'s Information : "<<endl;
        cout<<"Roll no. : "<<roll<<endl;
        cout<<"Percentage : "<<percentage<<endl;
    }
};

int main(){
    Student s;
    s.name="Courtney";
    s.setall(14,76.4);
    s.getall();
    return 0;
}