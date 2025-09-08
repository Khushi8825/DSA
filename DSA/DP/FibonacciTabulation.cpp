#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; 
    cin >> n;
    vector<int> dp(n+1);

    dp[0] = 0;  //base case
    dp[1] = 1;  //base case
    for(int i = 2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];
}

//TC = O(N)
//SC = O(N)