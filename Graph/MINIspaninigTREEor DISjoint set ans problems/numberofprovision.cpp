#include<bits/stdc++.h>
using namespace std ; 
class DisjointSet{
    public:
    vector<int>parent,size;
    DisjointSet(int n){
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0 ; i<=n;i++){
            size[i]=1;
            parent[i]=i;
        }
    }
    int findUPar(int node){
        if(parent[node]==node) return node;
        return parent[node]= findUPar(parent[node]);
    }
    void unionBySize(int u ,int v){
        int ult_u = findUPar( u);
        int ult_v =findUPar( v);
        if(size[ult_u]<size[ult_v]){
            parent[ult_u]= ult_v;
            size[ult_v]+=size[ult_u];
        }else{
            parent[ult_v]= ult_u;
            size[ult_u]+=size[ult_v];
        }
    }
};
class solution{
    public:  
    int numProvinces(vector<vector<int>>adj, int v ){
       DisjointSet ds(v);
       for(int i=0 ; i<v;i++){
            for(int j=0 ; j<v;j++){
                if(adj[i][j] == 1){
                  ds.unionBySize(i,j);
                }
            }
       }
       int cnt =0 ;
       for(int i=0 ; i<v;i++){
        if(ds.parent[i]==i){
            cnt++ ;
        }
       }
       return cnt ;
    }
    
};
int main() {
    
    vector<vector<int>> adj
    {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

        
    solution ob;
    cout << ob.numProvinces(adj,3) << endl;
        
    return 0;
}