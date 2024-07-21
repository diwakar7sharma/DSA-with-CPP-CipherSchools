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
void printll(node * &head){
    if(head==NULL){
        cout<<"Linked List is Empty!"<<endl;
        return;
    }
    node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    
    node *node1= new node(4);
    node *head=NULL;
    printll(head);

    head=node1;
    printll(head);

    node *node2=new node(5);
    node1->next=node2;
    printll(head);

    node *node3=new node(6);
    node2->next=node3;
    printll(head);
    //print(node1->next->next);

    return 0;
}