#include <bits/stdc++.h>
using namespace std ;
int solve(int ind , vector<int>&height, vector<int>&dp){
    if(dp[ind] != -1) return dp[ind];
      if(ind == 0 ) return 0 ;
      int left = solve(ind-1,height,dp) + abs(height[ind]-height[ind-1]);
      int right =INT_MAX;
      if(ind >1 ){
         right = solve(ind-2, height,dp) + abs(height[ind] - height[ind-2]);
      }
      return  dp[ind]= min(left , right );
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int>dp(n,-1);
  cout<<solve(n-1,height,dp);

  cout<<endl ; 
  for(auto it : dp){
    cout<<it<<" ";
  }
}