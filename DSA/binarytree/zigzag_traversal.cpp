#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
class queue{
    Node** a;
    int size;
    int front;
    int rear;
    queue(int size){
        this->size=size;
        a = new Node*[size];
        front = 0;
        rear = 0;
    }
    void push(Node* node){
        if(rear==size){
            cout<<"overload"<<endl;
        }
        a[rear]=node;
        rear++;
    }
    void pop(){
        if(front==rear){
            cout<<"underflow"<<endl;
        }
        front++;
    }
    bool isEmpty(){
        if(front==rear || rear-front==0) return true;
        return false;
    }
    Node* top(){
        if(front==rear){
            cout<<"Empty"<<endl;
        }
        return a[front];
    }
};
int** zigzag(Node* root){
    int** a = new int*[8];
}
int main(){

}