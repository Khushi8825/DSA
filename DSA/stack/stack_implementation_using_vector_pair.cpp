#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    vector<pair<int,int>> p;
    int size;
    int top;

    stack(int size){
        p=vector<pair<int,int>>(size);
        this->size=size;
        top=-1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            p[top].first=data;
            if(top==0){
                p[top].second=data;
            }
            else{
                p[top].second=min(p[top-1].first,data);
            }
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
            return -1;
        }
        else{
            return p[top].first;
        }
    }
    int getMin(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        else{
            return p[top].second;
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
};
int main(){
        
    stack s(10);
    //insertion
    s.push(4);
    s.push(2);
    s.push(3);
    s.push(40);
    
    cout<<s.peek()<<endl;
    cout<<s.getMin()<<endl;
    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }
      
    return 0;
}