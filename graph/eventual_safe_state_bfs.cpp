#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[]){
    vector<int> indegree(V, 0);

    for(int i = 0; i<V; i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }
    vector<int> ans;

    queue<int> q;

    for(int i =0; i<V; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int a = q.front();
        q.pop();
        ans.push_back(a);

        for(auto it: adj[a]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return ans;

}
vector<int> eventualSafeState(int V, vector<int> adj[]){
    vector<int> revAdj[V];

    for(int i = 0; i < V; i++){
        for(auto it : adj[i]){
            revAdj[it].push_back(i);
        }
    }

    vector<int> ans = topoSort(V, revAdj);

    return ans;
}
int main(){
    int V;
    cin >> V;
    int e;
    cin >> e;
    vector<int> adj[V];
    for(int i = 0; i<e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> ans = eventualSafeState(V, adj);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}