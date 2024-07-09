#include<iostream>
using namespace std;
class Coordinate{
    public:
    float a;
    float b;
    //Operator Overloading
    Coordinate operator+(Coordinate const &obj){
        Coordinate z;
        z.a=this->a+obj.a;
        z.b=this->b+obj.b;
        return z;
    }
    //Overloading a Function
    void sqdist(float a){
        float x;
        this->a=a;
        x=a*a+a*a;
        cout<<"The square of distance from "<<a<<" to "<<a<<" are "<<x<<endl;
    }
    void sqdist(float a,float b){
        float x;
        this->a=a;
        this->b=b;
        x=a*a+b*b;
        cout<<"The square of distance from "<<a<<" to "<<b<<" are "<<x<<endl;
    }

};
int main(){
    Coordinate c;
    c.a=7.5;
    c.b=2.5;
    c.sqdist(9,2.5);
    c.sqdist(8); 
    Coordinate d;
    d.a=3;
    d.b=4;
    Coordinate z;
    z=c+d;
    cout<<"Coordinates after adding objects : "<<z.a<<" and "<<z.b<<endl;
    return 0;
}