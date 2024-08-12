#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
void dfs(int row , int col , vector<vector<int>>&vis, vector<vector<int>>grid,
          vector<pair<int,int>>&arr , int delrow[],int delcol[], int brow , int bcol){
            vis[row][col]=1 ;
            arr.push_back({row-brow , col-bcol});
            int n = grid.size();
            int m =grid[0].size();
            for(int i=0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow>= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] &&
                    grid[nrow][ncol]== 1){

                        dfs(nrow,ncol,vis,grid,arr,delrow,delcol, brow , bcol);

                    }
            }
        }

int numdistinisland(vector<vector<int>>grid){
    int n = grid.size();
    int m =grid[0].size();
    set<vector<pair<int ,int>>>st;
    vector<vector<int>>vis(n,vector<int>(m,0));
     int delrow[]={0,1,0,-1};
     int delcol[]={-1,0,1,0};
    for(int i=0 ; i<n;i++){
        for(int j=0 ; j<m;j++){
            if(!vis[i][j] && grid[i][j]==1){
                vector<pair<int ,int>>arr;
                dfs( i , j , vis, grid, arr ,delrow , delcol , i , j );
                st.insert(arr);
            }
        }
    }
    return st.size();

}
};

int main() {
    // n: row, m: column
    vector<vector<int >> grid
    {
        {1,1,0,1,1},
        {1,0,0,0,0},
        {0,0,0,1,1},
        {1,1,0,1,0}
    };
    Solution obj;
        
    cout << obj.numdistinisland(grid) << endl;
        
    return 0;
}