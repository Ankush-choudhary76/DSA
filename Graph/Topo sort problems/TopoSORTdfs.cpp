#include<bits/stdc++.h>
using namespace std ;

class Solution{
    private:
    void dfs(int node , vector<int>adj[], stack<int>&st, int vis[]){
        vis[node] =1 ;
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it , adj, st , vis);
            }
        }
        st.push(node);
    }
    public :
    vector<int>topoSort(int v , vector<int>adj[]){
        int vis[v]={0};
        stack<int>st;
        for(int i=0 ; i<v;i++){
            if(!vis[i]){
                dfs(i,adj ,st,vis);
            }
        }
        vector<int>arr;
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        return arr;
    }
};


int main() {


	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	vector<int> ans = obj.topoSort(V, adj);

	for (auto node : ans) {
		cout << node << " ";
	}
	cout << endl;

	return 0;
}