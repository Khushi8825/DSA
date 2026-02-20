#include<bits/stdc++.h>
using namespace std;
int gasstation(vector<int>& gas, vector<int>& cost){
    //brute force
    int n = gas.size();
    // for(int i = 0; i<n; i++){
    //     int total_gas = 0;
    //     int j = 0;
    //     while(j!=n){
    //         int idx = (i+j)%n;
    //         total_gas += gas[idx];
    //         if(total_gas < cost[idx]){
    //             break;
    //         }
    //         total_gas -= cost[idx];
    //         j++;
    //     }
    //     if(j == n){
    //         return i;
    //     }
    // }
    // return -1;


    //optimal
    int balance = 0;
    int deficit = 0;
    int start = 0;
    for(int i = 0;i<n; i++){
        balance += gas[i] - cost[i];
        if(balance < 0){
            deficit += abs(balance);
            start = i+1;
            balance = 0;
        }
    }
    if(balance >= deficit){
        return start;
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> gas(n);
    vector<int> cost(n);
    cout<<"Enter gas value:\n";
    for(int i = 0; i<n; i++){
        cin>>gas[i];
    }
    cout<<"Enter cost value :\n";
    for(int i = 0; i<n; i++){
        cin>>cost[i];
    }
    int ans = gasstation(gas, cost);
    cout<<ans;
    return 0;
}