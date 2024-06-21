#include<iostream>
using namespace std;
void PrintHi(){
    cout<<"Hi"<<endl;
    return;
}

int sum(int a,int b){
    int c;
    c=a+b;
    a=500;
    cout<<"The value of c is "<<c<<".(Inside sum function)"<<endl;
    return c;
}

int main(){
    PrintHi();
    int a,b,c;
    a=4;
    b=6;
    int d;
    c=75;
    d=sum(a,b);
    cout<<"The value of c is "<<c<<".(Inside main function)"<<endl;
    cout<<"The sum is "<<d<<endl;
    return 0;
}