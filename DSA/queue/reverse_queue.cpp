#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int>& q){
    stack<int> s;
    int n=q.size();
    for(int i=0;i<n;i++){
        int temp=q.front();
        q.pop();
        s.push(temp);
    } 
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
}

void reverseQueue2(queue<int>& q){
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();
    reverseQueue2(q);
    q.push(temp);
}

void reverseKelements(queue<int>& q,int k){
    stack<int> s;
    int n=q.size();
    for(int i=0;i<k;i++){
        int temp=q.front();
        q.pop();
        s.push(temp);
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    
    for(int i=0;i<n-k;i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }
}
void printQueue(queue<int>& q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int> q;
    // stack<int> s;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // reverseQueue(q);
    // printQueue(q);
    // cout<<endl;
    // reverseQueue2(q);
    // printQueue(q);
    reverseKelements(q,3);
    printQueue(q);
}