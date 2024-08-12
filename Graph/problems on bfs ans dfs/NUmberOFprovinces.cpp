#include<bits/stdc++.h>
using namespace std ; 
class solution{
    private: 
    void dfs( int r , vector<int>adjls[], int vis[]){
        vis[r] = 1 ;
        for(auto it :adjls[r]){
            if(!vis[it]){
                dfs(it , adjls , vis);
            }
        }
    }
    public: 
    int numProvinces(vector<vector<int>>adj, int v ){
       vector<int>adjls[v];
       for(int i=0 ; i<v;i++){
            for(int j=0 ; j<v;j++){
                if(adj[i][j] == 1 && i!= j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
       }
       int vis[v] ={0};
       int cnt =0 ;
       for(int i=0 ; i<v;i++){
        if(!vis[i]){
            cnt++ ;
            dfs(i, adjls , vis);
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