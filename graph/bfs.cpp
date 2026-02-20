#include<bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>>& adj, vector<int>& vis, int node, vector<int>& ans){
    queue<int> q;
    q.push(node);
   
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int x : adj[node]){
            if(!vis[x]){
                vis[x] = 1;
                q.push(x);
            }
        }
    }
    return;
}
vector<int> bfs(vector<vector<int>>& adj){
    vector<int> vis(adj.size(), 0);
    vector<int> ans;

    for(int i = 0; i<adj.size(); i++){
        if(vis[i] == 0){
            vis[i] =1;
            helper(adj, vis, i, ans);
        }
    }
    return ans;
}
int main(){
    int V , E;
    cin>>V>>E;
    vector<vector<int>> adj(V);
    for(int i = 0; i<E; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bfsans = bfs(adj);
    for(int x : bfsans){
        cout<<x<<" ";
    }
    return 0;
}