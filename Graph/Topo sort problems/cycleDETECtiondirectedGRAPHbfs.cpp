#include<bits/stdc++.h>
using namespace std ;

class Solution{
   
    public :
        bool topoSort(int v , vector<int>adj[]){
       int indegree[v]={0};
       for(int i=0 ; i<v;i++){
            for(auto it : adj[i]){
            indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0 ; i<v;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>arr;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            arr.push_back(node);
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                q.push(it);
                }
            }
        }
        if(arr.size() == v ) return false ;
        return true ; 
    }
};


int main() {


	vector<int> adj[5] = {{2}, {3}, {4,5}, {2}, {3}};
	int V = 5;
	Solution obj;
	bool ans = obj.topoSort(V, adj);

	ans ? cout<<"cyclic" : cout<<"acyclic ";

	return 0;
}