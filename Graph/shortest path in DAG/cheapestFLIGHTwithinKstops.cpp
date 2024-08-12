#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
int CheapestFLight(int n , vector<vector<int>>flights , int src , int dst , int k ){
    vector<pair<int,int>>adj[n];
    for( auto it : flights){
        adj[it[0]].push_back({it[1],it[2]});
    }
    queue<pair<int,pair<int,int>>>q;
    vector<int>dist(n,1e9);
    dist[src]=0;
    q.push({0,{src,0}});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int stop = it.first;
        int node = it.second.first;
        int dis = it.second.second;
        if(stop > k) continue ;
        for(auto it : adj[node]){
            int nod = it.first;
            int cost = it.second;
            if(dis +cost < dist[nod] && stop <= k){
                dist[nod] = dis+cost;
                q.push({stop+1,{nod , cost+dis}});
            }
        }
    
    }
    if(dist[dst]== 1e9) return -1 ;
        return dist[dst];
    }
};
int main()
{

    int n = 4, src = 0, dst = 3, K = 1;

    vector<vector<int>> flights = {{0, 1, 100}, {1, 2, 100}, {2, 0, 100}, {1, 3, 600},
    {2, 3, 200}};

    Solution obj;

    int ans = obj.CheapestFLight(n, flights, src, dst, K);

    cout << ans;
    cout << endl;

    return 0;
}