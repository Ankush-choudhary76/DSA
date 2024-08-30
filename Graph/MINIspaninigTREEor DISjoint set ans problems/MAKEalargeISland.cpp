#include<bits/stdc++.h>
using namespace std; 
class DisjointSet{
    public:
    vector<int>parent,size;
    DisjointSet(int n ){
     size.resize(n+1);
     parent.resize(n+1);
     for(int i=0; i<=n;i++){
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
        if (ult_u == ult_v) return;
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
    private:
    bool isvalid(int nrow , int ncol , int n){
        return nrow >= 0 && nrow <n && ncol >=0 && ncol<n;
    }
public:
int MaxConnection(vector<vector<int>>grid){
    int n = grid.size();
    DisjointSet ds(n*n);
    for(int row = 0 ;row <n ;row++){
        for(int col = 0 ; col <n;col++){
            if(grid[row][col]==0) continue;
            int dr[]={-1,0,1,0};
            int dc[]= {0,-1,0,1};
            for(int ind = 0 ; ind<4;ind++){
                int nrow = row + dr[ind];
                int ncol = col + dc[ind];
                if(isvalid(nrow , ncol , n )&& grid[nrow][ncol]==1){
                    int nodeNo = row*n+col;
                    int adjnode = nrow * n + ncol;
                    ds.unionBySize(nodeNo,adjnode);
                }
            }
        }
    }
    int mx = 0;
    for(int row = 0 ; row <n;row++){
        for(int col =0 ; col <n;col++){
            if(grid[row][col]==1) continue;
            int dr[]={-1,0,1,0};
            int dc[]={0,-1,0,1};
            set<int>components;
            for(int ind = 0 ; ind <4;ind++){
                int nrow = row + dr[ind];
                int ncol = col + dc[ind];
                if(isvalid(nrow,ncol ,n)){
                    if(grid[nrow][ncol]==1){
                        components.insert(ds.findUPar(nrow* n + ncol));
                    }
                }
            }
            int sizeTotal =0 ;
            for(auto it : components ){
                sizeTotal += ds.size[it];
            }
            mx = max(mx , sizeTotal+1);
        }
    }
    for(int cellNO = 0 ; cellNO  <n*n;cellNO++){
        mx = max (mx , ds.size[ds.findUPar(cellNO)]);
    }
    return mx ;
}
};
int main() {

    vector<vector<int>> grid = {
        {1, 1, 0, 1, 1, 0}, {1, 1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1, 0}, {0, 0, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 0}, {0, 0, 1, 1, 1, 0}
    };

    Solution obj;
    int ans = obj.MaxConnection(grid);
    cout << "The largest group of connected 1s is of size: " << ans << endl;
    return 0;
}