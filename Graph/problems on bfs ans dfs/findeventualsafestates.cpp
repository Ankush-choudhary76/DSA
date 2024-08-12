// #include<bits/stdc++.h>
// using namespace std ;
// class Solution{
//     private:
//     bool dfs(int r , int vis[],int pathvis[], int check[],vector<int>adj[]){
//       vis[r]=1;
//       pathvis[r]=1;
//       check[r]=0;
//       for(auto it : adj[r]){
//         if(vis[it]==0){
//            if( dfs(it ,  vis , pathvis,check, adj)){
//             check[r]=0;
//             return true;
//             }
//         }else if(pathvis[it]){
//              check[r]=0 ; return true;
//         }
//       }
//       check[r]=1;
//       pathvis[r]=0;
//       return false ;
//     }
//     public:
// vector<int>isCyclic(int v , vector<int>adj[]){
//     int vis[v]={0};
//     int pathvis[v]={0};
//     int check[v]={0};
//     vector<int>arr;
//     for(int i=0 ; i<v;i++){
//         if(vis[i]==0){
//            dfs(i , vis , pathvis,check, adj);
//         }
//     }
//     for(int i=0; i<v;i++){
//         if(check[i]==1) arr.push_back(i);
//     }

//     return arr;

// }
// };

// int main() {

// 	// V = 11, E = 11;
// 	vector<int> adj[11] = {{}, {2}, {3}, {4, 7}, {5}, {6}, {}, {5}, {9}, {10}, {8}};
// 	int V = 11;
// 	Solution obj;
//   vector<int>arr = obj.isCyclic(V, adj);

// 	for(auto it : arr){
//         cout<<it<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std ;
class Solution{
    private:
    bool dfs(int r , int vis[], int check[],vector<int>adj[]){
      vis[r]=1;
      check[r]=0;
      for(auto it : adj[r]){
        if(vis[it]==0){
           if( dfs(it ,  vis ,check, adj)){
            check[r]=0;
            return true;
            }
        }else if(vis[it]==1){
             check[r]=0 ; return true;
        }
      }
      check[r]=1;
      vis[r]=2 ;
      return false ;
    }
    public:
vector<int>isCyclic(int v , vector<int>adj[]){
    int vis[v]={0};
    int check[v]={0};
    vector<int>arr;
    for(int i=0 ; i<v;i++){
        if(vis[i]==0){
           dfs(i , vis ,check, adj);
        }
    }
    for(int i=0; i<v;i++){
        if(check[i]==1) arr.push_back(i);
    }

    return arr;

}
};

int main() {

	// V = 11, E = 11;
	vector<int> adj[11] = {{}, {2}, {3}, {4, 7}, {5}, {6}, {}, {5}, {9}, {10}, {8}};
	int V = 11;
	Solution obj;
  vector<int>arr = obj.isCyclic(V, adj);

	for(auto it : arr){
        cout<<it<<" ";
    }
}
