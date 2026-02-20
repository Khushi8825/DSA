#include<bits/stdc++.h>
using namespace std;
void helper(int coins[], int n, int m, int i, int& count, int sum){
    if(sum == m){
        count++;
        return;
    }
    if(i == n){
        return;
    }
    if(sum > m){
        return;
   }
   helper(coins, n, m, i, count, sum+coins[i]);
   helper(coins, n ,m, i+1, count, sum);
   return;
}
int countWays(int coins[], int n, int m){
    int count = 0;
    helper(coins, n, m, 0, count, 0);
    return count;
}
int main(){
    int n;
    cin >> n;
    int coins[n];
    for(int i = 0; i<n; i++){
        cin >> coins[i];
    }
    int m;
    cin >>m;
    int count = countWays(coins, n, m);
    cout<<count;
    return 0;
}
