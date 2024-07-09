#include<iostream>
using namespace std;

int main(){
    //Bubble Sort
    int a[6];
    cout<<"Enter the elements : ";
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    cout<<"\nYour Array : ";
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"\nSorted Array : ";
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}