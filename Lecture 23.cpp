#include<iostream>
using namespace std;
int main(){
    int a;
    int *p=&a;
    cout<<"The address of p is "<<p<<" and p+1 is "<<p+1<<" and p+2 is "<<p+2<<endl;
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Address of "<<i+1<<"th element"<<&arr[i]<<endl;
    }

}