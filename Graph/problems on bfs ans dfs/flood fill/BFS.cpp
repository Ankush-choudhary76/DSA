#include<bits/stdc++.h>
using namespace std ;
class Solution {
    private:
    void dfs(int row , int col , int dc[] ,int dr[] , int newColor , int inicolor , vector<vector<int>>&image,
       vector<vector<int>>&ans ){
        ans[row][col ] = newColor ;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>>q ;
        q.push({row , col});
        while(!q.empty()){
            
        }
        for(int i=0 ; i<4;i++){
            int nrow = row + dr[i];
            int ncol = col + dc[i];
            if( nrow >= 0 && nrow < n && ncol >= 0 && nrow<m && image[nrow][ncol]== inicolor &&
            ans[nrow][ncol] != newColor ){
                dfs(nrow , ncol ,dc,dr, newColor ,inicolor , image , ans );
            }
        }
       }
    public: 
  vector<vector<int>>floodFill(vector<vector<int>>&image, int startrow , int startcol , int newColor){
            vector<vector<int>>ans = image;
            int inicolor = image[startrow][startrow];
            int delrow[]={-1, 0 ,1,0};
            int delcol[]={0,1,0,-1};
            bfs(startrow ,startcol , delcol , delrow ,newColor , inicolor , image , ans);
            return ans ;

  }
};
int main(){
		
	vector<vector<int>>image{
	    {1,1,1},
	    {1,1,0},
	    {1,0,1}
	};	
	Solution r;
	vector<vector<int>> ans = r.floodFill(image, 1, 1, 2);
	for(auto i: ans){
		for(auto j: i)
			cout << j << " ";
		cout << "\n";
	}
	
	return 0;
}