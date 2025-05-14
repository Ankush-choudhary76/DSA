#include <bits/stdc++.h>
using namespace std ;
int solve(int ind , vector<int>&height , vector<int>&dp){
   dp [0] = 0 ;
   for(int i=1 ; i<= ind ; i++){

      int left = dp[i-1] + abs(height[i]-height[i-1]);
      int right =INT_MAX;
      if(i >1 ){
         right =  dp[i-2]+ abs(height[i] - height[i-2]);
      }
     dp[i]= min(left , right );
   }
   return dp[ind];
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  vector<int>dp(n+1 , -1);
  cout<<solve(n-1,height, dp);
}
