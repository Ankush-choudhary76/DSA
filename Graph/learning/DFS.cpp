#include<bits/stdc++.h>
using namespace std ; 

class solution{
    private :
    void dfs(int r , int vis[], vector<int>adj[], vector<int>&ans){
        vis[r] = 1 ;
        ans.push_back(r);
        for(auto it : adj[r]){
            if(!vis[it]){
            dfs(it , vis , adj , ans );
            }
        }
    }
    public :
    vector<int>dfsfind(vector<int>adj[], int v ){
        int vis[v]={0};
        vector<int>ans ;
       int start = 0 ;
      dfs( start , vis , adj, ans);
             
        
        return ans ;
    }

};
void adjedge(vector<int>adj[], int u , int v ){
      adj[u].push_back(v);
      adj[v].push_back(u);
}

int main(){
    vector<int>adj[6];
     adjedge(adj , 0 ,1);
     adjedge(adj , 0 ,4);
     adjedge(adj , 1 ,2);
     adjedge(adj , 1 ,3);

     solution sol ;
     vector<int>ans = sol.dfsfind(adj , 6);
     for(auto it : ans){
        cout<<it<<" ";
     }


}