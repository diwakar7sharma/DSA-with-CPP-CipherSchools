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
void insertpos(node * &head,int data,int l){
    node *temp=new node(data);
    node *var=head;
    while(var->data!=l){
        var=var->next;
        if(var==NULL){
            cout<<l<<" Positon doesn't exists!"<<endl;
            return;
        }
    }
    temp->next=var->next;
    var->next=temp;
}
int main(){
    
    node *head=NULL;

    printll(head);
    inserts(head,1);
    printll(head);
    inserte(head,7);
    printll(head);
    insertpos(head,8,1);
    printll(head);
    insertpos(head,8,3);
    return 0;
}