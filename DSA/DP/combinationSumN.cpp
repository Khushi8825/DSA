#include<bits/stdc++.h>
using namespace std;
void helper2(vector<vector<int>>& ans, vector<int>& a, int n, int idx, int sum){
    if(sum > n){
        return;
    }
    if(sum == n){
        ans.push_back(a);
        return;
    }
    if(idx > n){
        return;
    }
    a.push_back(idx);
    helper2(ans, a, n, idx, sum+idx);
    a.pop_back();
    helper2(ans, a, n, idx+1, sum);
    return;
}
void helper(int n){
    vector<vector<int>> ans;
    vector<int> a;
    helper2(ans, a, n, 1, 0);
    for(int i = 0; i<ans.size(); i++){
        for(auto j : ans[i]){
            cout<<j<<",";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    helper(n);
    cout<<"hello";
    return 0;
}