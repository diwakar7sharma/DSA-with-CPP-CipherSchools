#include<iostream>
using namespace std;
//return type void
void print(int x){
    cout<<"You've entered number "<<x<<"."<<endl;
}
//return type integer
int sum(int a,int b){
    cout<<"The sum of two numbers you entered is "<<a+b<<"."<<endl;
}

int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    print(x);
//-------------
    int f,g;
    cout<<"Enter two numbers for addition : ";
    cin>>f>>g;
    sum(f,g);
    return 0;
}