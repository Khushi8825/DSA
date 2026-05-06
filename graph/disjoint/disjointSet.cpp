#include<bits/stdc++.h>
using namespace std;
class Disjoint{
    vector<int> rank, parent, size;
    public:
        Disjoint(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1, 1);
            for(int i = 0; i<=n; i++){
                parent[i] = i;
            }
        }

        int findPar(int u){
            if(u == parent[u]){
                return u;
            }
            return parent[u] = findPar(parent[u]);
        }
        //Union by Rank
        void unionByRank(int u, int v){
            int pu = findPar(u);
            int pv = findPar(v);
            if(pu == pv) return;
            if(rank[pu]>rank[pv]){
                parent[pv] = pu;
            }
            else if(rank[pv]>rank[pu]){
                parent[pu] = pv;
            }
            else{
                parent[pv] = pu;
                rank[pu]++;
            }
        }

        void unionBySize(int u, int v){
            int pu = findPar(u);
            int pv = findPar(v);
            if(pu == pv) return;
            if(size[pu] < size[pv]){
                parent[pu] = pv;
                size[pv] += size[pu];
            }
            else{
                parent[pv] = pu;
                size[pu] += size[pv];
            }
        }
};
int main(){
    Disjoint ds(7);
    return 0;
}