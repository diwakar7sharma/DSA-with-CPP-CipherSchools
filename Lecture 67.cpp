#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is already full!"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is Empty hence there is no element to pop."<<endl;
        }
    }
    void peek(){
        if(top<0){
            cout<<"There are no elements in the stack to peek"<<endl;
        }
        else{
            cout<<"The element at the top of the stack is "<<arr[top]<<endl;
        }
    }
    bool isEmpty(){
        if(top<0){
            return true;
        }
        return false;
    }
};

int main(){
    Stack n(5);
    n.push(5);
    n.peek();
    n.push(1);
    n.push(2);
    n.push(6);
    n.push(8);
    n.push(7);
    n.pop();
    n.peek();
    n.pop();
    n.peek();
    n.pop();
    n.pop();
    n.pop();
    n.pop();
    return 0;
}