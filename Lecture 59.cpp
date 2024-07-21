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
void deletenode(node * &head,int data){
    if(head->data==data){
        cout<<"Head is getting deleted."<<endl;
        head=head->next;
        return;
    }
    node *prev;
    node *temp = head;
    while(temp->data!=data){
        if(temp->next==NULL){
            cout<<"Element not found!";
            return;
        }
        prev=temp;
        temp=temp->next;
    }

    if(temp->next==NULL){
        prev->next=NULL;
        return;
    }
    prev->next=prev->next->next;

}
int main(){
    
    node *head=NULL;

    inserts(head,4);
    inserts(head,3);
    inserts(head,1);
    inserte(head,5);
    inserte(head,6);
    insertpos(head,2,1);
    printll(head);
    deletenode(head,2);
    deletenode(head,4);
    printll(head);
    deletenode(head,123);
    return 0;

}