#include<bits/stdc++.h>
using namespace std ;
class Solution{
    private :
    bool bfs(int s , int vis[], vector <int>adj[]){
        queue<pair<int,int>>q ;
        vis[s] = 1 ;
        q.push({s, -1});
        while(!q.empty()){
         int node = q.front().first;
         int parent = q.front().second;
         q.pop();
         for(auto it : adj[node]){
            if(!vis[it] ){
                vis[it] = 1 ;
                q.push({it , node});
            }else if( it != parent ) return true ;
         }
        }
        return false ;
    }
    public:
    bool isCycle(int v , vector<int>adj[]){
        int vis[v]={0};
        for(int i=0 ; i<v;i++){
            if(!vis[i]){
            if(bfs(i , vis , adj) ) return true;
            }
        }
        return false ;
    }
};
int main() {
    vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    Solution obj;
    bool ans = obj.isCycle(4, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}