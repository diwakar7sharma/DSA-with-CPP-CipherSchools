#include<iostream>
using namespace std;

int main(){
    //Insertion Sort
    int i,a[6];
    cout<<"Enter the elements : ";
    for(i=0;i<6;i++){
        cin>>a[i];
    }
    cout<<"\nYour Array : ";
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    for(int j=1;j<6;j++){
    int key=a[j];
    i=j-1;
    while(a[i]>key && i>=0){

        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;
    }
    cout<<"\nSorted Array : ";
    for(i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}