#include <bits/stdc++.h>
using namespace std ;

int  cs (int ind , vector<int>&dp ){
    if(dp[ind]!= -1 ) return dp[ind];
    if(ind <= 1 ) return 1 ;
     return dp [ind] = cs(ind-1 ,dp )+cs(ind-2,dp);
}
int main (){
      int n = 3;
      vector<int>dp(n+1 , -1);
      cout<<cs(n , dp );
}
