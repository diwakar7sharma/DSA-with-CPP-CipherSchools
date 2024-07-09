#include<iostream>

using namespace std;
int main(){

    char arr[5];
    cout<<"Enter the name : "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<"The name : ";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<"."<<endl;

    //Stopping entering name at a character

    char a[100];

    int i=0;

    cout<<"Enter your name (-->Enter '$' to stop<--) : "<<endl;
    while(1){
        cin>>a[i];
        if(a[i]=='$'){
            break;
        }
        i++;
    }

    i=0;

    cout<<"The name you've entered is ";
    while(1){
        if(a[i]=='$'){
            break;
        }
        cout<<a[i];
        i++;
    }
    cout<<"."<<endl;

    //Strings
    cout<<"Enter the name : ";
    string name;
    cin>>name;
    cout<<"The name you've entered is "<<name;
    return 0;
}