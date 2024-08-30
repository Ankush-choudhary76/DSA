#include<bits/stdc++.h>
using namespace std ;
class DisjointSet{
    vector<int>parent,size;
    public:
    DisjointSet(int n ){
     size.resize(n+1);
     parent.resize(n+1);
     for(int i=0; i<n;i++){
        size[i] = 1;
        parent[i]= i ;
     }
    }
    int findUPar(int node){
        if(parent[node]== node) return node ;
        return parent[node]= findUPar(parent[node]);
    }
    void unionBySize(int u ,int v){
        int ult_u = findUPar(u);
        int ult_v = findUPar(v);
        if(size[ult_u] < size[ult_v]){
            parent[ult_u] = ult_v;
            size[ult_v] += size[ult_u];
        }else{
            parent[ult_v] = ult_u;
            size[ult_u] += size[ult_v];
        }
    }


};
class Solution{
    public: 
        int spanningTree(int v , vector<vector<int>> adj[]){
         vector<pair<int,pair<int,int>>>edge;
         for(int i=0 ; i < v ; i++){
            for(auto it : adj[i]){
                int wt = it[1];
                int an = it[0];
                int node = i;
                edge.push_back({wt,{node,an}});
            }
         }
         DisjointSet ds(v);
         sort(edge.begin(),edge.end());
         int mstWt =0 ;
         for(auto it : edge){
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            if(ds.findUPar(u)!=ds.findUPar(v)){
                mstWt += wt ;
                ds.unionBySize(u,v);
            }
         }
         return mstWt ;
        }
    
};
int main() {

    int V = 5;
    vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
    vector<vector<int>> adj[V];
    for (auto it : edges) {
        vector<int> tmp(2);
        tmp[0] = it[1];
        tmp[1] = it[2];
        adj[it[0]].push_back(tmp);

        tmp[0] = it[0];
        tmp[1] = it[2];
        adj[it[1]].push_back(tmp);
    }

    Solution obj;
    int mstWt = obj.spanningTree(V, adj);
    cout << "The sum of all the edge weights: " << mstWt << endl;
    return 0;
}