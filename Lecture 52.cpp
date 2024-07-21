#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int mids;
    float ends;
    bool pre_abs;
    void calcmarks(){
        float t=mids*0.5+ends*0.8;
        cout<<"The marks of "<<name<<" are "<<t<<endl;
    }
    void calcfail(){
        if(ends<=38){
            cout<<name<<" has failed"<<endl;
        }
        else{
            cout<<"Pass"<<endl;
        }
    }
    void projectsdd(int pjmarks){
        cout<<mids+ends+pjmarks;
    }

};
class vehicle{
    public:
    string car_name;
    string tyre_name;
    int number_of_tyres;
    int number_of_seats;
};
int main(){
    student a;
    a.name="Sova";
    a.mids=50;
    a.ends=90.5;
    a.pre_abs=1;
    a.calcmarks();
    a.calcfail();
    a.projectsdd(7);
    vehicle b;
    b.car_name="Mercedes";
    b.number_of_seats=4;
    b.number_of_tyres=4;
    b.tyre_name="MRF";
    
    return 0;
}