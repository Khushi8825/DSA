#include<iostream>
#include<vector>
using namespace std;
class queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int data){
        cout<<"hi"<<endl;
        if(front==-1){
            front++;
            arr[front]=data;
            arr[rear]=data;
            return;
        }
        if(rear==size-1 && front==0 || front-rear==1){
            cout<<"queue is full"<<endl;
            return;
        }
        if(rear == size && front != 0){
            rear=0;
            arr[rear]=data;
            return;
        }
        rear++;
        arr[rear]=data;

    }
    void pop(){

    }
    int getsize(){

    }
    bool isEmpty(){

    }
    
};
int main(){
    queue q(5);
    q.push(5);
    q.push(25);
    q.push(55);
    q.push(50);
    q.push(15);
    cout<<"FULL"<<endl;
    q.push(555);
}