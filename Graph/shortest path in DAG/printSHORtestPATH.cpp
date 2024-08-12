#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public : 
    vector<int>shortestPath(int v , int e , vector<vector<int>>edges){
        vector<pair<int,int>>adj[v+1];
        vector<int>dist(v+1,1e9),parent(v+1);
        for(int i=1 ; i<=v;i++) parent[i] = i ;
      for(auto it : edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,1});
        dist[1]=0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int weight = it.first;
            for(auto it : adj[node]){
                int adjnode = it.first;
                int ew = it.second;
                if(ew + weight < dist[adjnode]){
                    dist[adjnode] = ew + weight;
                    pq.push({ew+weight , adjnode});
                    parent[adjnode]= node ;
                }
            }
        }
        if(dist[v]==1e9) return {-1};
        vector<int>path ;
        int node = v ;
        while(parent[node]!= node){
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        return path ;
    }
};



int main()
{

    int V = 5, E = 6;
    vector<vector<int>> edges = {{1, 2, 2}, {2, 5, 5}, {2, 3, 4}, {1, 4, 1}, {4, 3, 3}, 
    {3, 5, 1}};
    Solution obj;
    vector<int> path = obj.shortestPath(V, E, edges);

    for (int i = 0; i < path.size(); i++)
    {

        cout << path[i] << " ";
    }
    cout << endl;
    return 0;
}