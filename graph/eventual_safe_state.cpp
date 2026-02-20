//DFS based approach to find eventual safe states in a directed graph
#include <bits/stdc++.h>
using namespace std;
const int V = 1000;
vector<int> adj[V];
void addDirectedEdge(int u, int v)
{
    adj[u].push_back(v);
}
bool dfscheck(int i, vector<int> &vis, vector<int> &pathVis, vector<int> &safeNode, vector<int> adj[])
{
    vis[i] = 1;
    pathVis[i] = 1;

    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            if (dfscheck(it, vis, pathVis, safeNode, adj))
            {
                return true;
            }
        }
        else if (pathVis[it])
        {
            return true;
        }
    }
    pathVis[i] = 0;
    safeNode[i] = 1;
    return false;
}

vector<int> eventualSafeState(int V, vector<int> adj[])
{
    vector<int> vis(V, false);      // visited array
    vector<int> pathVis(V, false);  // path visited array
    vector<int> safeNode(V, false); // safe node array

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfscheck(i, vis, pathVis, safeNode, adj);
        }
    }
    vector<int> ans;
    for (int i = 0; i < V; i++)
    {
        if (safeNode[i] == 1)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter number of nodes : ";
    cin >> n;

    // directed graph
    int e; // number of edges
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u;
        int v;
        cout << "Enter edge : ";
        cin >> u >> v;
        addDirectedEdge(u, v);
    }
    vector<int> ans = eventualSafeState(n, adj);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}