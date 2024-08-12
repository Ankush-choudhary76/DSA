#include<bits/stdc++.h>
using namespace std ;
class Solution {
    public:
    vector<int>dijkstra(int v ,vector<vector<int>>adj[],int s ){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   vector<int>disto(v,0);
   for(int i=0 ; i<v;i++) disto[i]= INT_MAX;
   disto[s]=0;
   pq.push({0,s});
   while(!pq.empty()){
    int dis = pq.top().first;
    int node = pq.top().second;
    pq.pop();
    for(auto it : adj[node]){
        int u = it[0];
        int w = it[1];
        if(dis + w < disto[u]){
            disto[u] = dis+w;
            pq.push({dis+w , u});
        }
    }
   }
    return disto ;
   }

};


int main()
{
    int V = 3, E = 3, S = 2;
    vector<vector<int>> adj[V];
    vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    Solution obj;
    vector<int> res = obj.dijkstra(V, adj, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}