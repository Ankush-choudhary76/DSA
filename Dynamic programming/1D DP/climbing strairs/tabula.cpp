#include <bits/stdc++.h>
using namespace std ;

int  cs (int ind , vector<int>&dp ){
    dp[0] =1;
    dp[1]= 1 ;
    for(int i= 2 ; i<= ind ; i++){ 
     dp[i] = dp[i-1] + dp[i-2];
    } 
    return dp[ind];
}
int main (){
      int n = 3;
      vector<int>dp(n+1 , -1);
      cout<<cs(n , dp );
} 