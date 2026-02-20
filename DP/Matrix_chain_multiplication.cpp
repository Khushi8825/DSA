#include<bits/stdc++.h>
using namespace std;
int func(vector<int>& arr, int i, int j){
    if(i == j) return 0;
    int mini = INT_MAX;
    for(int k = i; k<j; k++){
        int steps = (arr[i-1] * arr[k] * arr[j]) + func(arr ,i, k) + func(arr, k+1, j); 
        mini = min(mini, steps);
    }
    return mini;
}
int helper(vector<int>& arr){
    int n = arr.size();
    return func(arr, 1, n-1);
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
    int ans = helper(arr);
    cout<<ans;
    return 0;
}