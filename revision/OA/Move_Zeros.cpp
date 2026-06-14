#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(vector<int>& arr){
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            cnt++;
        }
    }
    int x = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            arr[x] = arr[i];
            x++;
        }
        if(x == n-cnt){
            break;
        }
    }
    while(x < n){
        arr[x] = 0;
        x++;
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> ans = moveZeros(arr);
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}