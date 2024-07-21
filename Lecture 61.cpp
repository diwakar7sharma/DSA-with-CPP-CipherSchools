#include<iostream>
using namespace std;

class Queue{

    public:
    int queue[1000];
    int max_cap;
    int size;
    int front;
    int rear;
    Queue(){
        this->front=0;
        this->max_cap=1000;
        this->rear=-1;
        this->size=0;
    }
    void enqueue(int data){
        if(size==max_cap){
            cout<<"Maximum Capacity has been reached.";
            return;
        }
        rear=(rear+1)%max_cap;
        queue[rear]=data;
        size++;
    }
    void dequeue(){
        if(size==0){
            cout<<"There are no more elements."<<endl;
            return;
        }
        cout<<"The element to be dequeued is "<<queue[front]<<endl;
        front++;
        size--;
    }
    void peek(){
        cout<<"Element at front : "<<queue[front]<<endl;
    }
    void sizeofqueue(){
        cout<<"The Current Size of the Queue is "<<size<<"."<<endl;
    }
};
int main(){
    Queue a;
    a.enqueue(5);
    a.enqueue(3);
    a.enqueue(9);
    a.peek();
    a.dequeue();
    a.sizeofqueue();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    return 0;
}