#include<iostream>
using namespace std;

void simplesearch(int *arr,int l,int r,int val){
    for(int i=l;i<r+1;i++){
        if(arr[i]==val){
            cout<<"Your value is present!"<<endl;
            return;
        }
    }
    cout<<"Your value is not Present :("<<endl;
}

int binarysearch(int *arr,int l,int r,int val){
    int middle=l+(r-l)/2;
    if(r>=l){
        if(arr[middle]==val){
            return 1;
        }
        else if(arr[middle]>val){
            return binarysearch(arr,l,middle-1,val);
        }
        else{
            return binarysearch(arr,middle+1,r,val);
        }
    }
    return -1;
}

int main(){
    int arr[7]={3,2,1,4,5,9,7};
    simplesearch(arr,0,6,6);
    simplesearch(arr,0,6,9);
    int a[7]={1,2,3,4,5,6,7};
    int x=binarysearch(a,0,6,2);
    if(x>0){
        cout<<"Your element is present in the array!";
    }
    else{
        cout<<"Your element is not present in the array.";
    }
    return 0;
}