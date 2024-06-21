#include<iostream>
using namespace std;
int sum(int a,int b){
    int x;
    x=a+b;
    return x;
}
int main(){
    int f,g;
    cout<<"Enter Two Numbers : ";
    cin>>f>>g;
    int su=sum(f,g);
    cout<<"The sum is "<<su<<"."<<endl;
}