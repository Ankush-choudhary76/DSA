#include<bits/stdc++.h>
using namespace std ;


class solution{
    private :
    void DFS(int row , int col , vector<vector<char>>&ans , vector<vector<int>>&vis ){
               vis[row][col] = 1 ;
           int n = ans.size() , m = ans[0].size();
        int delrow[]= {-1, -1, -1, 0, 0, 1, 1, 1};
        int delcol[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        for(int i=0 ; i<8;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol]
            && ans[nrow][ncol]=='1'){
                vis[nrow][ncol] = 1 ;
                DFS(nrow , ncol , ans , vis);
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
                        DFS(row , col , arr , vis );
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