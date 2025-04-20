#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> interleave(queue<int>& q){
    int n=q.size();
    int k=n/2;
    cout<<k<<endl;
    queue<int> half;
    for(int i=0;i<k;i++){
        int temp=q.front();
        cout<<temp<<endl;
        q.pop();
        half.push(temp);
    }
    queue<int> ans;
    while(!q.empty() && !half.empty()){
        int temp=half.front();
        int temp2=q.front();
        half.pop();
        q.pop();
        ans.push(temp);
        ans.push(temp2);
    }
    if(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
void printQueue(queue<int>& q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    //q.push(80);

    queue<int> ans=interleave(q);
    printQueue(ans);

}