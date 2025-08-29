//taking input of adj list
#include<iostream>
#include<vector>
#include<queue>
#include<vector>
using namespace std;
vector<int> shortestPathUG(vector<vector<int>>& adj, int src){

}
int  main(){
    int V;
    cout<<"Enter the number of vertices : ";
    cin>>V;
    cout<<"Vertices range from 0 to " << V << "-1"<<endl;
    cout<<"Enter the adj nodes"<<endl;
    vector<vector<int>> adj(V);
    for(int i = 0; i<V; i++){
        int x;
        cout<<"enter the number of adj nodes to node " << i << " : ";
        cin>>x;
        cout<<endl;
        for(int j = 0; j<x; j++){
            int n;
            cin>>n;
            adj[i].push_back(n);
        }
    }
    for(int i = 0; i<V; i++){
        cout << i << "->";
        for(int j = 0; j < adj[i].size();j++){
            cout << adj[i][j]<<" ";
        }
        cout<<endl;
    }
    shortestPathUG(adj,0);
    return 0;
}