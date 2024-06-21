#include<iostream>
using namespace std;
int main(){
    int password;
    cout<<"Enter the Password : ";
    cin>>password;
    //while
    while(password<99999){
        cout<<"Wrong Password! Enter Again : ";
        cin>>password;
    }
    cout<<"You're Authorized Now"<<endl;
    //do-while
    do
    {
        cout<<"Enter Correct Password : ";
        cin>>password;
    } while (password<99999);

    //infinite loops
    int i=0;
    do{ 
        i++;
        cout<<i<<endl;
        if(i>100){
            break;
        }
    }
    while(1);

    int count=0;
    for(int i; ;i++){
        cout<<"Real Madrid ";
        count++;
        if(count==100)
            break;
    }
    return 0;
}