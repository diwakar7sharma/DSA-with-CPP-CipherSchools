#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node * next;
    
    node(int n){
        this->data=n;
        this->next=NULL;
    }
};
void print(node * &node){
    cout<<"Value : "<<node->data<<endl;
    cout<<"Address : "<<node->next<<endl;
}
int main(){
    node *node1= new node(4);
    node *node2=new node(5);
    node *node3=new node(6);
    node1->next=node2;
    node2->next=node3;
    print(node1);
    print(node2);
    print(node3);
    return 0;
}