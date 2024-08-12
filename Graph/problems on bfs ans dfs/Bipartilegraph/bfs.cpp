#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:

bool bfs(int r ,int v, int color[], vector<int>adj[]){
    queue<int>q;
    q.push(r);
    color[r]=0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(color[it]== -1){
                color[it]=! color[node];
                q.push(it);
            }else if(color[it] == color[node]) return false ;
        }

    }
    return true ;
}

bool isBipartite(int v , vector<int>adj[]){
    int color[v];
    for(int i=0;i<v;i++) color[i]={-1};
     for(int i=0 ; i<v;i++){
        if(color[i]==-1){
           if( bfs(i ,v, color , adj)== false) return false ;
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