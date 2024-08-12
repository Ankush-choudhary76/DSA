#include<bits/stdc++.h>
using namespace std ;
class Solution{
    private:
    void toposort(int node , vector<pair<int,int>>adj[] , int vis[],stack<int>&st){
        vis[node]=1;
        for(auto it : adj[node]){
            int v = it.first;
            if(!vis[v]){
                toposort(v,adj,vis,st);
            }
        }
        st.push(node);
    }
public:
vector<int>shortestPath(int n , int m , vector<vector<int>>edges){
    vector<pair<int,int>>adj[n];
    for(int i=0 ; i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wit = edges[i][2];
        adj[u].push_back({v,wit});
    }
    int vis[n]={0};
    stack<int>st;
    for(int i=0 ; i<n;i++){
        if(!vis[i]){
          toposort(i,adj,vis,st);
        }
    }
    vector<int>dis(n);
    for(int i=0 ; i<n;i++){
        dis[i]=1e9;
    }
    dis[0]=0;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        for(auto it : adj[node]){
            int v = it.first;
            int wit = it.second;
            if(dis[node]+wit < dis[v]){
                dis[v]=wit + dis[node];
            }
        }
    }
    for(int i=0 ; i<n;i++){
        if(dis[i]== 1e9){
            dis[i]= -1;
        }
    }
    return dis ;
}
};
int main() {

  int N = 6, M = 7;
  
  vector<vector<int>> edges= {{0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}};
  Solution obj;
  vector < int > ans = obj.shortestPath(N, M, edges);

  for (int i = 0; i < ans.size(); i++) {

    cout << ans[i] << " ";
  }

  return 0;

}