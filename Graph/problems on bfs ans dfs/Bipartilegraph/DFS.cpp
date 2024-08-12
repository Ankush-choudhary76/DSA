#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
bool dfs(int node , int col ,int color[], vector<int>adj[]){
    color[node] = col;
    for(auto it  : adj[node]){
        if(color[it]== -1){
           if( dfs(it , !col ,color, adj) == false ) return false ;
        }else if(color[it] == col) return false ;
    }
 return true ;
}
bool isBipartite(int v , vector<int>adj[]){
    int color[v];
    for(int i=0 ;i<v;i++) color[i]=-1;
    for(int i=0 ; i<v;i++){
        if(color[i]==-1){
        if(dfs(i,0,color , adj)== false) return false;
        }
    }
    return true ;
}

};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
	
	vector<int>adj[4];
	
	addEdge(adj, 0, 2);
   	addEdge(adj, 0, 3);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 1);

	Solution obj;
	bool ans = obj.isBipartite(4, adj);    
	if(ans)cout << "1\n";
	else cout << "0\n";  
	
	return 0;
}