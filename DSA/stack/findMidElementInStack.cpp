#include<iostream>
#include<stack>
using namespace std;
void midElement(stack<int> &s,int size,int &mid,int top){
    if(top == mid){
        cout<< s.top();
        return ;
    
    }
    cout<<"i'm at :" <<s.top()<<"function call"<<endl;
    int temp=s.top();
    s.pop();
    midElement(s,size-1,mid,top-1);
    s.push(temp);
    }

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int x=s.size();
    int y=x/2;
    midElement(s , x , y, x-1);

}