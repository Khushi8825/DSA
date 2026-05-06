#include<bits/stdc++.h>
using namespace std;
class StackClass{
    private:
    int *arrayStack;
    int capacity;
    int top;
    public:
    StackClass(int size = 1000){
        capacity = size;
        arrayStack = new int[capacity];
        top = -1;
    }
    public:
    void push(int x){
        if(top == capacity){
            cout<<"stack overflow"<<" ";
            return;
        }
        top++;
        arrayStack[top] = x;
        return;
    }
    public:
    void pop(){
        if(top == -1) {
            cout<<"Stack underflow"<<" ";
            return;
        }
        top--;
        return;
    }
    public:
    void topElement(){
        if(top == -1) {
            cout<<"stack underflow"<<" ";
            return;
        }
        cout<<arrayStack[top]<<" ";
    }
    public:
    void isEmpty(){
        if(top == -1) {
            cout<<"true"<<" ";
            return;
        }
        else{
            cout<<"false"<<" ";
            return;
        }
    }
    public:
    void size(){
        // cout<<top+1<<" ";
        cout<<capacity<<" ";
        return ;
    }
};
int main(){
    // StackClass s;
    // s.push(5); //->insert 5
    // s.push(4); //->insert 4
    // s.push(7); //->insert 7
    // s.pop(); //->remove 7
    // s.topElement(); //->return top element 4
    // s.size(); //2
    // s.isEmpty(); //false
    // s.pop(); //remove 4
    // s.pop(); //remove 5
    // s.size(); //0
    // s.isEmpty(); //true

    StackClass s(5);
    s.size();

}