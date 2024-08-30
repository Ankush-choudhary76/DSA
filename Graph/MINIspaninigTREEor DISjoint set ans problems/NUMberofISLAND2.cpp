#include<bits/stdc++.h>
using namespace std ;
class DisjointSet {
    vector<int>size,parent;
    public:
    DisjointSet(int n){
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            size[i]=1;
            parent[i]=i;
        }
    }    
    int findUPar(int node){
        if(parent[node]== node) return node;
        return parent[node]=findUPar(parent[node]);
    }
    void unionBySize(int n, int m ){
        int ult_u = findUPar( n);
        int ult_v = findUPar(m);
        if(size[ult_u]<size[ult_v]){
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
    bool isvalid(int nrow ,int ncol ,int n ,int m){
        return nrow>=0 && nrow<n && ncol >= 0 && ncol <m;
    }
    public:
    vector<int>numOfIslands(int n ,int m , vector<vector<int>>operators){
         DisjointSet ds(n*m);
         int vis [n][m]={0};
         int cnt =0 ;
         vector<int>ans ;
         for(auto it : operators){
            int row = it[0] ;
            int col = it[1];
            if(vis[row][col]==1){
                ans.push_back(cnt);
                continue;
            }
            vis[row][col]=1;
            cnt++;
            int delrow []= {-1,0,1,0};
            int delcol [] = {0,1,0,-1};

            for(int i=0 ; i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(isvalid(nrow, ncol , n , m)){
                    if(vis[nrow][ncol]==1){
                     int node = row*m + col ;
                     int adjnode = nrow*m+ncol;
                     if(ds.findUPar(node)!=ds.findUPar(adjnode)){
                        cnt--;
                        ds.unionBySize(node, adjnode);
                    }
                    }
                    
                }
            }
            ans.push_back(cnt);
         }
         return ans ;

    }
};
int main() {

    int n = 4, m = 5;
    vector<vector<int>> operators = {{0, 0}, {0, 0}, {1, 1}, {1, 0}, {0, 1},
        {0, 3}, {1, 3}, {0, 4}, {3, 2}, {2, 2}, {1, 2}, {0, 2}
    };


    Solution obj;
    vector<int> ans = obj.numOfIslands(n, m, operators);
    for (auto res : ans) {
        cout << res << " ";
    }
    cout << endl;
    return 0;
}