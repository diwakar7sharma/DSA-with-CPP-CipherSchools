#include<iostream>
using namespace std;
int main(){
    int n[4];
    for(int i=0;i<4;i++){
        cin>>n[i];
    }
    for(int i=0;i<4;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
    // reverse order
    int a;
    cout<<"Enter the size of array : ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cout<<"Enter "<<i+1<<"th element : ";
        cin>>arr[i];
    }
    cout<<"Reverse Order : ";
    for(int i=a-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}