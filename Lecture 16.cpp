#include<iostream>
using namespace std;
int sum(int ,int );
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int s;
    s=sum(a,b);
    cout<<"The sum is "<<s<<"."<<endl;
    cout<<a<<" "<<b;
}
int sum(int a,int b){
    int c=a+b;
    a=10;
    b=10;
    return c;
}