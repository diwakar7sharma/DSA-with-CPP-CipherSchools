#include<iostream>
using namespace std;
void swap(int &a,int &b){ //by reference we were able to change actual parameter
    int t=a;
    a=b;
    b=t;
}
void fun(int &a,int b){
    a=9.5;
    b=9.5;
    cout<<"Inside fun function,The value of a is "<<a<<" and b is "<<b<<"."<<endl;
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"The value of a is "<<a<<" and b is "<<b<<"."<<endl;
    swap(a,b);
    cout<<"After swapping The value of a is "<<a<<" and b is "<<b<<"."<<endl;
    fun(a,b);
    cout<<"Outside fun function,The value of a is "<<a<<" and b is "<<b<<"."<<endl;
    return 0;
}