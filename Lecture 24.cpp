#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
    cout<<"Swapping Completed!"<<endl;
    
}
int main(){
    int a=4,b=5;
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    
    int p[5];
    cout<<"The address of p : "<<&p<<endl;
    cout<<"The address of p[0] : "<<&p[0]<<endl;
    cout<<"The address of p[1] : "<<&p[1]<<endl;
    cout<<"The address of p[2] : "<<&p[2]<<endl;
    
    return 0;
}
