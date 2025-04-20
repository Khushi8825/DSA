#include<iostream>
using namespace std;
class queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int gettop(){
        if(front == rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    int getSize(){
        if(front == rear){
            return 0;
        }
        else{
            return rear-front;
        }
    }
};
int main(){
    queue q(5);
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    cout<<"size:"<<q.getSize()<<endl;

    q.pop();
    cout<<"Front:"<<q.gettop()<<endl;
    cout<<"size:"<<q.getSize()<<endl;
    cout<<"empty:"<<q.isEmpty()<<endl;

}