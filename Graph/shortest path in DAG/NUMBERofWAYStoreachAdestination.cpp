#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
int countPaths(int n , vector<vector<int>>&edges){
    vector<pair<int,int>>adj[n];
    for(auto it : edges){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }
    int mod = (int)(1e9+7);
    vector<int>dist(n,INT_MAX) , way(n,0);
    dist[0]=0;
    way[0]=1;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,0});
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        int dis = it.first;
        int node = it.second;
        for(auto it : adj[node]){
            int adjnode = it.first;
            int edw = it.second;
         if(dis +edw < dist[adjnode]){
            dist[adjnode]= dis + edw;
            pq.push({dis +edw , adjnode});
            way[adjnode] = (way[adjnode]+way[node])%mod;
         }else if(dis + edw == dist[adjnode]){
              way[adjnode] = (way[adjnode]+way[node])%mod;
         }
        }
    }
    return way[n-1]%mod ;
}
};
int main()
{
    // Driver Code.
    int n = 7;

    vector<vector<int>> edges = {{0, 6, 7}, {0, 1, 2}, {1, 2, 3}, {1, 3, 3}, {6, 3, 3}, 
    {3, 5, 1}, {6, 5, 1}, {2, 5, 1}, {0, 4, 5}, {4, 6, 2}};

    Solution obj;

    int ans = obj.countPaths(n, edges);

    cout << ans;
    cout << endl;

    return 0;
}