#include<bits/stdc++.h>
using namespace std ;
class DisjointSet{
    public:
    vector<int>parent,size;

    DisjointSet(int n  ){
       parent.resize(n+1);
       size.resize(n+1);
       for(int i=0 ; i<=n;i++){
        size[i]=1;
        parent[i]=i;
       }
    }
       int findUPar(int node){
        if(parent[node]== node) return node;
        return parent[node] = findUPar(parent[node]);
       }
       void unionBySize(int n , int m ){
        int ulp_u = findUPar(n);
        int ulp_v = findUPar(m);
        if(ulp_u==ulp_v) return ;
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v]++;
        }else{
             parent[ulp_v] = ulp_u;
            size[ulp_u]++;
        }
       }
};
class Solution{
    public:
    int maxRemove(vector<vector<int>>&stones,int n){
       int mxrow =0;
       int mxcol =0;
       for(auto it : stones){
         mxrow = max (mxrow , it[0]);
         mxcol = max(mxcol , it[1]);
       }
       DisjointSet ds(mxrow +mxcol+1);
       unordered_map<int,int>mpp;
       for(auto it : stones){
        int nrow = it[0];
        int ncol = it[1]+mxrow+1;
        ds.unionBySize(nrow , ncol);
        mpp[nrow]=1;
        mpp[nrow]=1;
       }
       int cnt =0;
       for(auto it : mpp){
        if(ds.findUPar(it.first)==it.first){
            cnt++;
        }
       }
       return n-cnt;
    }
};
int main() {

    int n = 6;
    vector<vector<int>> stones = {
        {0, 0}, {0, 2},
        {1, 3}, {3, 1},
        {3, 2}, {4, 3}
    };

    Solution obj;
    int ans = obj.maxRemove(stones, n);
    cout << "The maximum number of stones we can remove is: " << ans << endl;
    return 0;
}