#include<bits/stdc++.h>
using namespace std ;

class solution{
    public: 
    vector<int>bfsitration(vector<int>adj[], int n ){
        int vis[n]={0};
        queue<int>q;
        vis[0]=1;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
         bfs.push_back(node);
         for(auto it : adj[node]){
             if(!vis[it]){
                vis[it] = 1 ;
                q.push(it);
             }
         }
        }
        return bfs;
    }
};
void ADJedge(vector<int>adj[] , int u ,int v ){
        adj[u].push_back(v);
        adj[v].push_back(u);
}
void print(vector<int>&ans){
        for(auto it : ans){
            cout<<it<<" ";
        }
}
int main(){
    vector<int>adj[6];
    ADJedge(adj , 0,1);
     ADJedge(adj , 0,4);
      ADJedge(adj , 1,2);
       ADJedge(adj , 1,3);

       solution sol ;
    vector<int>ans = sol.bfsitration(adj , 5);
    print(ans);
}