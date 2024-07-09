#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cin>>name;
    for(int i=0;i<3;i++){
        cout<<name[i]<<endl;
    }
    //Integers are added and Strings are concatenated
    string f_name;
    string l_name;
    cout<<"Enter your First Name : ";
    cin>>f_name;
    cout<<"Enter your Second Name : ";
    cin>>l_name;
    string x=f_name+" "+l_name;
    cout<<"Your name is "<<x<<"."<<endl;
    cout<<"Your name's length is "<<x.length()<<"."<<endl;
    //getline
    string a;
    getline(cin,a);
    cout<<a<<endl;
    return 0;
}