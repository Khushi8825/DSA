#include<iostream>
#include<queue>
using namespace std;
void mergeHeap(int arr[],int m,int arr2[],int n,priority_queue<int>& q){
    for(int i = 0; i < m; i++){
        q.push(arr[i]);
    }
    for(int i = 0; i < n; i++){
        q.push(arr2[i]);
    }
}

int main(){
    int arr[] = {3,5,6,3,5,6};
    int arr2[] = {10,40,30,59,66};
    priority_queue<int> q;
    mergeHeap(arr,6,arr2,5,q);
    int n = q.size();
    for(int i = 0; i < n; i++){
        cout << q.top() << " ";
        q.pop();
    }
}