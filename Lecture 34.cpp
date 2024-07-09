#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a;
    cout<<"Size of the vector : "<<a.size()<<endl;
    for(int i=0;i<5;i++){
        a.push_back(i+1);
    }
    cout<<"The size of the vector is "<<a.size()<<endl;
    a.pop_back();
    
    cout<<"The size of the vector is "<<a.size()<<endl;
    cout<<"First vector : "<<a[0]<<endl;
    for(auto j=a.begin();j<a.end();j++){
        cout<<*j<<" ";
    }

    cout<<endl;
    cout<<"The capacity of the vector is "<<a.capacity()<<endl;
    return 0;
}