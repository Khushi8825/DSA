#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, vector<int>& vis, vector<int> adj[], int parent){
    vis[node] = 1;

    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(it, vis, adj, node)){
                return true;
            }
        }
        else if(it != parent){
            return true;
        }
    }
    return false;
}
bool detectCycle(int V, vector<int> adj[]){
    vector<int> vis(V, 0);
    for(int i =0; i<V; i++){
        if(!vis[i]){
           if( dfs(i, vis, adj, -1)){
            return true;
           }
        }
    }
    return false;

}
int main(){
    int V, e;
    cin>>V>>e; 
    vector<int> adj[V];
    for(int i = 0; i<e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0; i<V; i++){
        cout<<i<<": ";
        for(auto it:adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    bool ans = detectCycle(V, adj);
    cout << ans;
    return 0;
}