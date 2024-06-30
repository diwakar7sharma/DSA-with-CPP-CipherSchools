#include<iostream>
using namespace std;

int main(){
    int a=5,b=0;
    int *p=&a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a using pointer is "<<*p<<endl;

    int *q=&b;
    cout<<"The value of only q(address of variable) is "<<q<<" and &b is "<<&b<<endl;
    int c=*p+*q;
    cout<<"The value of c is "<<c<<endl;
    return 0;
}