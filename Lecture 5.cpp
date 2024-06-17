#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Two Numbers : ";
    int a,b;
    cin>>a>>b;
    cout<<(a>b)<<endl;

    //using AND and OR

    cout<<"Enter Four Numbers : ";
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    cout<<"Using AND : "<<(p>q && r>s)<<endl;
    cout<<"Using OR : "<<(p>q || r>s)<<endl;
}