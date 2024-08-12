#include<bits/stdc++.h>
using namespace std ;


class solution{
    private :
    void bfs(int row , int col , vector<vector<char>>&ans , vector<vector<int>>&vis ){
               vis[row][col] = 1 ;
             queue<pair<int,int>>q;
             q.push({row,col});
             int n = ans.size() , m = ans[0].size();
             while(!q.empty()){
                int row = q.front().first ;
                int col = q.front().second;
                q.pop();
                for(int i= -1 ; i<=1;i++){
                 for(int j=-1 ; j<=1;j++){
                    int nrow = row +i ;
                    int ncol = col + j;
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol< m && !vis[nrow][ncol]
                     && ans[nrow][ncol]== '1' ){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                     }
                }
                }
             }
    }
   public : 
   int numofisland(vector<vector<char>>&arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>>vis(n , vector<int>(m,0));
    int cnt =0 ;
      for(int  row =0 ; row < n ; row ++){
        for(int col =0 ; col <m ; col++){
            if(!vis[row][col] &&  arr[row][col]== '1'){
                bfs(row , col , arr , vis );
                cnt ++ ;
            }
        }
      }
      return cnt ;
   }

};
int main(){
    vector<vector<char>>arr{
        {'0', '1', '1', '0'},
        {'0', '1', '1', '0'},
        {'0', '0', '1', '0'},
        {'0', '0', '0', '0'},
        {'1', '1', '0', '1'}
    };

    solution sol ; 
    cout<<sol.numofisland(arr );
}