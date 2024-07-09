#include<iostream>
using namespace std;
class Vehicle{
    public:
    int no_tyres;
    string name;
    int capacity;
    int mileage;

    void calcmileage(){
        cout<<"This mileage is "<<mileage<<" kmpl."<<endl;
    }
};

class SchoolBus : public Vehicle{
    private:
    int no_holidays;
    string scname;
    public:
    SchoolBus(int n,string s){
        no_holidays=n;
        scname=s;
    }
    
    void printschoolname(){
        cout<<"The name of the School is "<<scname<<endl;
    }
};

class Car : public Vehicle{
    private:
    int no_airbags;
    int ac_consumption;

};
int main(){
    Car a;
    a.mileage=25;
    a.calcmileage();
    SchoolBus b(143,"La Martinere Lucknow");
    b.mileage=10;
    b.calcmileage();
    b.printschoolname();
    return 0;
}