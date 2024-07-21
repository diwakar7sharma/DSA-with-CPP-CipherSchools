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
void inserts(node * &head,int data){
    node *temp=new node(data);
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next=head;
    head=temp;
}
void inserte(node * &head,int data){
    node * temp=new node(data);
    if(head==NULL){
        head=temp;
        return;
    }
    node *end=head;
    while(end->next!=NULL){
        end=end->next;
    }
    end->next=temp;
}
int main(){
    
    node *head=NULL;

    printll(head);
    inserts(head,1);
    printll(head);
    inserte(head,7);
    printll(head);
    return 0;
}