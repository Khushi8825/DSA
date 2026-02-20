#include<bits/stdc++.h>
using namespace std;
// int helper(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& check, int& maxi){
//     check[i][j] = 0;
//     int dx[] = {0, 1, 0, -1};
//     int dy[] = {-1, 0, 1, 0};

//     for(int k = 0; k<4; k++){
//         int idxi = i+dx[k];
//         int idxj = j+dy[k];

//         if(idxi >=0 && idxi < matrix.size() && idxj >= 0 && idxj < matrix[0].size() && check[idxi][idxj] != -1 && matrix[idxi][idxj] > matrix[i][j]){
//             int new2 = 1+helper(idxi, idxj, matrix, check, maxi);
//             maxi = max(maxi, new2);
//         }
//     }
//     check[i][j] = -1;
//     return maxi;
// }
// int maxPath(vector<vector<int>> &matrix){
//     int m = matrix.size();
//     int n = matrix[0].size();
//     int mini = INT_MAX;
//     int mini_i, mini_j;
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             if(mini > matrix[i][j]){
//                 mini = matrix[i][j];
//                 mini_i = i;
//                 mini_j = j;
//             }
//         }
//     }
//     int maxi = INT_MIN;
//     vector<vector<int>> check(m, vector<int>(n, -1));
//     return helper(mini_i, mini_j, matrix, check, maxi);
// }
//memoizatiom
int helper(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& dp){
    if(dp[i][j] != -1) return dp[i][j];
    int ans = 1;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};
    for(int k = 0; k<4; k++){
        int idxi = i+dx[k];
        int idxj = j+dy[k];
        if(idxi >= 0 && idxi < matrix.size() && idxj >= 0 && idxj < matrix[0].size() && matrix[idxi][idxj] > matrix[i][j]) {
            ans = max(ans, 1 + helper(idxi, idxj, matrix, dp));
        }

    }
    return dp[i][j] = ans;
}
int maxPath(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> dp(m , vector<int>(n+1, -1));
    int maxi = INT_MIN;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            maxi = max(maxi, helper(i, j, matrix, dp));
        }
    }
    return maxi;
}
int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            int x;
            cin >> x;
            matrix[i][j] = x;
        }
    }
    int ans = maxPath(matrix);
    cout << ans;
    return  0;
}