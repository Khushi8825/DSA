#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
// int solve(vector<int>& arr,int n){
//     if(n ==0){
//         return 0;
//     }
//     if(n<0){
//         return INT_MIN;
//     }
//     int maxi=INT_MIN;
//     for(int i=0;i<arr.size();i++){
//         int ans=solve(arr,n-arr[i]);
//         maxi=max(maxi,ans+1);
//     }
//     return maxi;
// }

// int main(){
//     vector<int> x={3,3,3};
//     int rod=7;
//     int ans=solve(x,rod);
//     if(ans<0) cout<<0;
//     else cout<<ans;
// }

int solve(int n,int x,int y, int z){
    if(n == 0){
        return 0;
    }
    
    if(n < 0){
        return INT_MIN;
    }

    int ans1=solve(n-x,x,y,z)+1;
    int ans2=solve(n-y,x,y,z)+1;
    int ans3=solve(n-z,x,y,z)+1;
    int ans=max(ans1,max(ans2,ans3));

    return ans;
}

int main(){
    int n=7;
    int x=3;
    int y=3;
    int z=2;

    int ans=solve(n,x,y,z);
    if(ans<0) cout<<0;
    else cout<<ans;
}