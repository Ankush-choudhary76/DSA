#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
    int shortestPath(vector<vector<int>>grid , pair<int,int>source , pair<int,int>destination){
        if(source.first == destination.first && source.second == destination.second){
            return 0 ;
        }
        int n =grid.size(), m = grid[0].size();
        vector<vector<int>>dist(n , vector<int>(m,1e9));
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{source.first,source.second}});
        dist[source.first][source.second] = 0;
        int delrow[]={-1,0,1,0};
        int delcol[]= {0,1,0,-1};
        while(!q.empty()){
            auto it = q.front();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >=0 && nrow <n && ncol >= 0 && ncol <m && grid[nrow][ncol]==1 &&
                     dis +1 < dist[nrow][ncol]){
                        dist[nrow][ncol] = dis+1;
                        if(nrow == destination.first && ncol == destination.second) return dis+1;
                        q.push({1+dis,{nrow , ncol}});
                    }
            }
        }
        return -1 ;
    }
};
int main()
{


    pair<int, int> source, destination;
    source.first = 0;
    source.second = 1;
    destination.first = 2;
    destination.second = 2;

    vector<vector<int>> grid = {{1, 1, 1, 1},
                                {1, 1, 0, 1},
                                {1, 1, 1, 1},
                                {1, 1, 0, 0},
                                {1, 0, 0, 1}};

    Solution obj;

    int res = obj.shortestPath(grid, source, destination);

    cout << res;
    cout << endl;

    return 0;
}