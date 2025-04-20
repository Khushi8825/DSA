//you have array
//you have to tell the minimum number of elements required
//to reach target sum

#include<vector>
#include<iostream>
#include<limits.h>
using namespace std;
int solve(vector<int>& arr,int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);//function will return ans for target-arr[i] but we have to reach target thats why ans+1 we did
        }
    }
    return mini;
}

int main(){
    vector<int> arr={1,2,3};
    //int n;
    int target=5;
    //cout<<"Enter the size of array:";
    // cin>>n;
    // cout<<"enter the target sum:";
    // cin>>target;
    //   for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }  
    int ans=solve(arr,target);
    cout<<ans;
}