#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int* arr=new int[size];
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    vector<int> ans(size);
    stack<int> s;
    s.push(-1);
    for(int i=0;i<size;i++){
        while(s.top()>=arr[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(ans[i]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}