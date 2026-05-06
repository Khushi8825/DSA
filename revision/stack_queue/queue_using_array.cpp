#include<bits/stdc++.h>
using namespace std;
class ArrayQueue{
    private:
    int *arr;
    int capacity;
    int rear;  //where we add new elements 
    int front; //from where we delete first come
    int currSize;
    public:
    ArrayQueue(int size = 100){
        capacity = size;
        arr = new int[capacity];
        rear = -1;
        front = -1;
        currSize = 0;
    }
    void push(int x){
        if(rear == -1){
            rear=0;
            front=0;
            arr[rear] = x;
            currSize++;
            return;
        }
        if(currSize == capacity){
            cout<<"Queue overflow"<<" ";
        }
        rear++;
        rear = rear%capacity;
        arr[rear] = x;
        currSize++;
        return;
    }
    void pop(){
        if(rear == -1 || currSize == 0){
            cout <<"Queue underflow"<<" ";
            return;
        }
        if(currSize == 1){
            front = -1;
            rear = -1;
        }
        else{
            front = (front+1)%capacity;
        }
        currSize--;
    }
    void peek(){
        if(currSize == 0){
            cout<<"queue is empty"<<" ";
        }
        cout<<arr[front]<<" ";
    }
    void isEmpty(){
        cout<<(currSize == 0) <<" ";
        return;
    }
};
int main(){
    ArrayQueue q;
    q.push(5);
    q.push(4);
    q.push(9);
    q.push(10);
    q.pop();
    q.pop();
    q.peek();
}