#include<bits/stdc++.h>
using namespace std;
    int orangesRotting(vector<vector<int>>& grid) {
      if(grid.empty()) return 0 ;
      int n = grid.size() , m = grid[0].size();
      queue<pair<int,int>>rotten ;
      int tot =0 , cnt =0 ,days=0 ;
      for(int i=0 ; i<n;i++){
        for(int j=0 ; j<m;j++){
             if(grid[i][j]!= 0) tot++;
             if(grid[i][j]== 2 ) {  
                rotten.push({i,j });
             }
              
        }
      }
    int delrow[] = {-1,0,1,0};
    int delcol[] = {0,1,0,-1};

    while(!rotten.empty()){
        int k = rotten.size();
        cnt += k;
        while(k --){
            int x = rotten.front().first;
            int y = rotten .front().second ;
            rotten .pop();
            for(int i=0 ; i<4;i++){
                int nrow = x +delrow[i];
                int ncol = y + delcol[i];
                if(nrow < 0 || nrow >= n || ncol < 0 || ncol >= m ||grid[nrow][ncol]!=1) continue ;
                grid[nrow][ncol] = 2 ;
                rotten.push({nrow,ncol});
            }
             
        }
        if(!rotten.empty()) days++;
    }
           return tot == cnt ? days : -1 ;
    }

    int main()
    {
        vector<vector<int>> v{ {2,1,1} , {1,1,0} , {0,1,1} } ;
        int rotting = orangesRotting(v);
        cout<<"Minimum Number of Minutes Required "<<rotting<<endl;
        
    }