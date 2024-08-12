// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//     bool dfs(int node , int vis[], vector<int>adj[]){
//         vis[node]=1;
//         for(auto it : adj[node]){
//             if(vis[it]==0){
//                if( dfs(it, vis, adj)) return true;
//             }else if( vis[it]==1){
//                 return true ;
//             }
//         }
//     vis[node]=2;
//     return false;
//     }
// public:
// bool isCyclic(int v , vector<int>adj[]){
//     int vis[v]={0};
//     for(int i=0 ; i<v;i++){
//         if(vis[i]==0){
//         if(dfs(i, vis, adj)== true) return true;
//         }
//     }
//     return false ;
// }
	
// };


// int main() {

// 	// V = 11, E = 11;
// 	vector<int> adj[11] = {{}, {2}, {3}, {4, 7}, {5}, {6}, {}, {5}, {9}, {10}, {8}};
// 	int V = 11;
// 	Solution obj;
// 	bool ans = obj.isCyclic(V, adj);

// 	if (ans)
// 		cout << "True\n";
// 	else
// 		cout << "False\n";

// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std ;
class Solution{
    private:
    bool dfs(int r , int vis[],int pathvis[] ,vector<int>adj[]){
      vis[r]=1;
      pathvis[r]=1;
      
      for(auto it : adj[r]){
        if(vis[it]==0){
           if( dfs(it ,  vis , pathvis, adj)){
            return true;
            }
        }else if(pathvis[it]==1){
             return true;
        }
      }
      pathvis[r]=0;
      return false ;
    }
    public:
    bool isCyclic(int v , vector<int>adj[]){
    int vis[v]={0};
    int pathvis[v]={0};
    vector<int>arr;
    for(int i=0 ; i<v;i++){
        if(vis[i]==0){
           if(dfs(i , vis , pathvis, adj)) return true ;
        }
    }
    

    return false ;

}
};

int main() {

	// V = 11, E = 11;
	vector<int> adj[11] = {{}, {2}, {3}, {4, 7}, {5}, {6}, {}, {5}, {9}, {10}, {8}};
	int V = 11;
	Solution obj;
 	bool ans = obj.isCyclic(V, adj);

	if (ans)
		cout << "True\n";
	else
		cout << "False\n";

	return 0;
}
