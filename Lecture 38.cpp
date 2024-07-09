#include<iostream>
using namespace std;

int main(){
    int a[6]={3,25,7,45,2,9};
    //Selection sort - ASEC
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n-------------"<<endl;
    for(int i=0;i<6;i++){
        int x=i;
        for(int j=i;j<6;j++){
            if(a[j]<a[x]){
                x=j;
            }
        }
        int temp=a[i];
        a[i]=a[x];
        a[x]=temp;

    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}