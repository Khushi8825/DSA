//NUMBER OF ISLANDS II
#include<bits/stdc++.h>
using namespace std;
class disjoint{
    vector<int> parent;
    vector<int> rank;

    disjoint(int n){
        parent.resize(n+1);
        rank.resize(n+1, 0);
        for(int i = 0; i<n+1; i++){
            parent[i] = i;
        }
    }
    int findUPar(int u){
        if(parent[u]==u){
            return u;
        }
        return parent[u]=findUPar(parent[u]);
    }
    void unionByRank(int u, int v){
        int pu = findUPar(u);
        int pv = findUPar(v);
    }
}
vector<int> numberOfIslands(int n, int m, vector<vector<int>> &A){

}
int main(){
    int n; //no. of rows
    int m; //no. of columns
    cin>>n>>m;
    vector<vector<int>> operation;
    int size;
    for(int i = 0; i<size; i++){
        int x;
        int y;
        cin>>x>>y;
        operation.push_back({x,y});
    } 
    vector<int> ans = numberOfIslands(n, m, operation);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}