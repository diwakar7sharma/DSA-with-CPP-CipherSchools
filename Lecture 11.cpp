#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<101){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    int x;
    for(int i=0;i<100;i++){
        cout<<"Guess a Number between 1 to 100 : ";
        cin>>x;
        if(x==36){
            cout<<"You've Guessed it Right!"<<endl;
            break;
        }
        else{
            cout<<"Such a moron! Guess that Again!!"<<endl;
        }
    }
    return 0;
}