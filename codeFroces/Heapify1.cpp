#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& arr){
    int n = arr.size()-1;
    for(int i = 1; i<n/2; i++){
        if(2*i <= n && arr[i] > arr[2*i]){
            swap(arr[i], arr[2*i]);
        }
    }
    for(int i = 1; i<n; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n+1);
        arr[0] = 0;
        for(int i = 1; i<n+1; i++){
            cin>>arr[i];
        }
        bool ans = isSorted(arr);
        if(ans){
            cout<<"yes";
        }
        else{
            cout<<"No";
        }
    }
    return 0;
}
