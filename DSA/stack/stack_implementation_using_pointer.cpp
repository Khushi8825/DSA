#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;//pointer->storage
    int size;//array size
    int top;//index of top element

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    //behaviours
    //push
    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
           cout<<"stack overflow"<<endl;
        } 
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }  
    int getsize(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return 0;
        }
        else{
            return top+1;
        }
    }
};
int main(){

    Stack s(10);
    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }
    cout << "size of stack " << s.getsize()<<endl;  
    return 0;
}