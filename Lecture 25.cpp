#include<iostream>
using namespace std;
void minandmax(int *a,int *min,int *max){
    int x=a[0];
    int y=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>x){
            x=a[i];
        }
        if(a[i]<y){
            y=a[i];
        }
    }
    *min=y;
    *max=x;
}
int main(){
    int arr[5];
    int min,max;
    for(int i=0;i<5;i++){
        arr[i]=i;
    }
    minandmax(arr,&min,&max);
    cout<<"The maximum is "<<max<<" and the minimum is "<<min<<endl;
    return 0;
}