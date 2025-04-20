//first -ve integer in every window of size k;
#include<iostream>
#include<queue>
using namespace std;
void solve(vector<int>& arr,int size,int k){
    queue<int> q;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    for(int i=k;i<size;i++){     //0-based indexing
        if(!q.empty()){
            cout<< arr[q.front()] <<" "<<endl;
        }
        else{
            cout << 0 << " "<< endl;
        }
    
        // while(!q.empty() && i-q.front()>=k){
        if(i-q.front()>=k){
            q.pop();
        }

        if(arr[i]<0){
            q.push(i);
        }
    }
    if(!q.empty()){
        cout << arr[q.front()] << " ";
    }
    else{
        cout<<0<<" ";
    }
}
int main(){
    vector<int> arr{-1,-5,-6,10};
    int size = 4;
    int k=2;
    solve(arr,size,k);
}
