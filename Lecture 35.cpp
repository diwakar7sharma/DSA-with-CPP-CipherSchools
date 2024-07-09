#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<list>

using namespace std;

int main(){
    //Stack - LIFO
    stack<int> a;
    a.push(5);
    a.push(6);
    a.push(7);
    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;
    if(a.empty()){
        cout<<"The stack is currently empty."<<endl;
    }
    else
        cout<<"The stack is currently not empty."<<endl;
    a.pop();
    a.pop();
    if(a.empty()){
        cout<<"The stack is currently empty."<<endl;
    }
    else{
        cout<<"The stack is currently not empty."<<endl;
    }
    cout<<"----------------------"<<endl;
    //Queue - FIFO
    queue<int> b;
    for(int i=1;i<4;i++){
        b.push(i);
    }
    cout<<"Front Element : "<<b.front()<<endl;
    cout<<"----------------------"<<endl;

    //HashMap
    map<string,int> hash;
    hash["coly"]=1;
    hash["does"]=2;
    hash["something"]=3;
    cout<<"The value of coly in the hashtable is "<<hash["does"]<<endl;
    for(auto j=hash.begin();j!=hash.end();j++){
        cout<<"The Key : "<<j->first<<"|The value : "<<j->second<<endl;
    }
    cout<<"----------------------"<<endl;

    //List
    list<int> x;
    x.push_front(1);
    x.push_back(2);
    x.push_back(3);
    x.push_front(5);
    x.sort();
    x.pop_front();
    x.pop_back();
    for(auto i=x.begin();i!=x.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}