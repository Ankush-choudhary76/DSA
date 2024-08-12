#include<bits/stdc++.h>
using namespace std ;
class Solution {
    public: 
  vector<vector<int>>floodFill(vector<vector<int>>&image, int startrow , int startcol , int newColor){
            vector<vector<int>>ans = image;
            int initcolor = image[startrow][startcol];
            if(newColor == initcolor) return image ;
            queue<pair<int,int>>q ;
            ans[startrow][startcol] = newColor;
            q.push({startrow , startcol});
            int n = image.size();
            int m= image[0].size();
            int delrow[] = {-1,0,1,0};
            int delcol[] = {0,1,0,-1};
            while(!q.empty()){
                int row = q.front().first ;
                int col = q.front().second;
                q.pop();
             for(int i=0 ; i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
             
             if(nrow >= 0 && nrow < n && ncol >= 0 && ncol< m && image[nrow][ncol]== initcolor &&
               ans[nrow][ncol]!= newColor){
                 ans[nrow][ncol]=newColor;
                 q.push({nrow ,ncol});
               }
             }
            }
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