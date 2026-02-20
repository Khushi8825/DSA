#include<bits/stdc++.h>
using namespace std;
void helper(int node, vector<vector<int>>& adjMatrix, vector<int>& ans, vector<int>& vis){
    vis[node] = 1;
    ans.push_back(node);
    int V = adjMatrix.size();
    for(int i=0; i<V; i++){
        if(adjMatrix[node][i] == 1 && !vis[i]){
            helper(i, adjMatrix, ans, vis);
        }
    }
    return;
}
vector<int> dfs(vector<vector<int>> adjMatrix){
    int V = adjMatrix.size();
    vector<int> ans;
    vector<int> vis(V, 0);
    int count = 0;
    for(int i = 0; i<V; i++){
        if(vis[i]==0){
            count++;
            helper(i, adjMatrix, ans, vis);
        }
    }
    cout<<count<<endl;
    return ans;
}
int main(){
    int V, E;
    cin>>V>>E;
    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));
    for(int i = 0; i<E; i++){
        int u, v;
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }
    vector<int> ans = dfs(adjMatrix);
    for(int x : ans){
        cout << x <<" ";
    }
    return 0;
}