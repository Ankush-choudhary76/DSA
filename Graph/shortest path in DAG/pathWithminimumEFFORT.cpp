#include<bits/stdc++.h>
using namespace std ;
class Solution{
   public:
   int MinimumEffort(vector<vector<int>>heights){
    int n=heights.size() , m = heights[0].size();
    vector<vector<int>>dist(n,vector<int>(m,1e9));
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>>pq;
    dist[0][0]=0;
    pq.push({0,{0,0}});
    int delrow[]={0,1,0,-1};
    int delcol[]={-1,0,1,0};
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        int diff = it.first;
        int row = it.second.first;
        int col = it.second.second;
        if(row == n-1 && col == m-1) return diff ;
        for(int i=0; i<4;i++){
            int nrow = row +delrow[i];
            int ncol = col + delcol[i];
            if(nrow >=0 && nrow <n && ncol >= 0 && ncol <m ){
                int neweffort = max(abs(heights[nrow][ncol]-heights[row][col]), diff);
                if(neweffort < dist[nrow][ncol]){
                    dist[nrow][ncol] = neweffort;
                    pq.push({neweffort,{nrow,ncol}});
                }
            }
        }
    }
    return 0 ;
   }
};

int main()
{


    vector<vector<int>> heights = {{1, 2, 2}, {3, 8, 2}, {5, 3, 5}};

    Solution obj;

    int ans = obj.MinimumEffort(heights);

    cout << ans;
    cout << endl;

    return 0;
}