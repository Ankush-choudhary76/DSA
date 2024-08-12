#include<bits/stdc++.h>
using namespace std ;
class Solution{
    private :
    bool dfs(int s , int parent ,int vis[], vector <int>adj[]){
           vis[s]= 1 ;
           for(auto it : adj[s]){
            if(!vis[it]){
           if( dfs(it , s , vis ,adj)) return true;
            }else if (parent != it ) return true ;
           }
           return false  ;
    }
    public:
    bool isCycle(int v , vector<int>adj[]){
        int vis[v]={0};
        for(int i=0 ; i<v;i++){
            if(!vis[i]){
            if(dfs(i ,-1, vis , adj) ) return true;
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