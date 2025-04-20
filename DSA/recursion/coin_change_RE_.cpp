#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>& arr , int target,int op){

    if(op==target){
        return 0;
    }
    if(op>target){
        return INT_MAX;
    }
    int maxi=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = solve(arr , target , op+arr[i]);
        if(ans != INT_MAX){
            maxi=min(maxi,ans+1);
        }
    } 
    return maxi;
}

int main(){
    vector<int> coins = {1,2,3};
    int target_sum=5;
    int op=0;
    int ans=solve(coins,target_sum ,op);
    if(ans != INT_MIN)  cout<<ans;
    else cout<<-1;
}