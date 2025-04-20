#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
void StoreStack(stack<int> &s,vector<int> &arr){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    arr.push_back(temp);
    s.pop();
    StoreStack(s,arr);
    s.push(temp);
    return;
}
void insertTarget(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>= target){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    insertTarget(s,target);
    s.push(temp);
}
void SortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int target = s.top();
    s.pop();
    SortStack(s);
    insertTarget(s,target);

}
int main(){
    stack<int> s;
    int n,element;
    cout<<"Enter the no. of elements in stack:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        s.push(element);
    }
    // vector<int> arr;
    // StoreStack(s,arr);
    // sort(arr.begin(),arr.end(),greater<int>());
    // for(int i=0;i<n;i++){
    //     s.pop();
    // }
    // for(int i=0;i<n;i++){
    //     s.push(arr[i]);
    // }
    SortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}