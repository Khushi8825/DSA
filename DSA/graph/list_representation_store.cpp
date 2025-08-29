#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i<m; i++){
        int u , v;
        cin>>u>>v;
        //for undirected graph   SC = O(2m)
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i < n+1; i++){
        cout<<i<<"->";
        for(int j : adj[i]){
            cout<<j<<" ";
        }
        cout << endl;
    }
}