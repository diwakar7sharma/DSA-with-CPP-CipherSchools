#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    int x=fib(n-1)+fib(n-2);
    return x;  
}
int main(){
    int n;
    cout<<"Enter the number for fibonacci series : ";
    cin>>n;
    cout<<fib(n);
    return 0;
}