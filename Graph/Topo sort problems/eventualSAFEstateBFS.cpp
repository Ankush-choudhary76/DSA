#include<bits/stdc++.h>
using namespace std ;
class Solution{
      public:
vector<int>eventualsafeNode(int v , vector<int>adj[]){
   vector<int>adjlist[v];
    int indegree[v]={0};
   for(int i=0 ; i<v;i++){
        for(auto it : adj[i]){
            adjlist[it].push_back(i);
            indegree[i]++;
        }
    }
    queue<int>q;

    for(int i=0 ;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
          
        }
    }
    
    vector<int>arr;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        arr.push_back(node);
        for(auto it : adjlist[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    } 
    sort(arr.begin(),arr.end());
    return arr;
   
}
};

int main() {

	// V = 11, E = 11;
	vector<int> adj[11] = {{1}, {2}, {3}, {4, 7}, {5}, {6}, {}, {5}, {9}, {10}, {8}};
	int V = 11;
	Solution obj;
  vector<int>arr = obj.eventualsafeNode(V, adj);

	for(auto it : arr){
        cout<<it<<" ";
    }
}
