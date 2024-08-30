#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
    int  spanningTree(int v ,vector<vector<int>>adj[]){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        vector<int>vis(v,0);
        int sum =0 ;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int wt = it.first;
            int node = it.second;
         if(vis[node]) continue;
         sum+= wt;
         vis[node]=1;
         for(auto it : adj[node]){
           int an = it[0];
           int weights = it[1];
           if(!vis[an]){
           pq.push({weights,an});
           }
         }
        }
        return sum ;
    }
};
int main() {

	int V = 5;
	vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 1}, {1, 2, 1}, {2, 3, 2}, {3, 4, 1}, {4, 2, 2}};
	vector<vector<int>> adj[V];
	for (auto it : edges) {
		vector<int> tmp(2);
		tmp[0] = it[1];
		tmp[1] = it[2];
		adj[it[0]].push_back(tmp);

		tmp[0] = it[0];
		tmp[1] = it[2];
		adj[it[1]].push_back(tmp);
	}

	Solution obj;
	int sum = obj.spanningTree(V, adj);
	cout << "The sum of all the edge weights: " << sum << endl;

	return 0;
}