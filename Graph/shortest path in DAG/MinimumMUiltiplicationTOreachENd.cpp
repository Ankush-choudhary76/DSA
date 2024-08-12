#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
    int minimumMultiplications(vector<int>arr, int start , int end){
        queue<pair<int,int>>q;
        vector<int>dist(100000,1e9);
        dist[start]=0;
        q.push({start ,0});
        int mod = 100000;
        while(!q.empty()){
            int node = q.front().first ;
            int step = q.front().second;
            q.pop();
            for(auto it : arr){
             int num = (it*node)%mod;
             if(step+1 <dist[num]){
               dist[num]=step+1;
               if(num == end) return step +1 ;
               q.push({num , step+1});
             }
            }
        }
        return -1 ;
    }
};
int main()
{
    // Driver Code.
    int start = 3, end = 30;

    vector<int> arr = {2, 5, 7};

    Solution obj;

    int ans = obj.minimumMultiplications(arr, start, end);

    cout << ans;
    cout << endl;

    return 0;
}