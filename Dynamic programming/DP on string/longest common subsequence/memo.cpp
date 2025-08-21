#include<bits/stdc++.h>
using namespace std ; 

int lca(int i, int j, string s1 , string s2 , vector<vector<int>>&dp ){
      if(i<0 || j<0) return 0 ; 
       if(dp[i][j]!=-1) return dp[i][j];      
      if(s1[i]==s2[j]) {
        return   dp[i][j] =  1+ lca(i-1 ,j-1 , s1,s2 ,dp);
      }
      return  dp[i][j] =  max(lca(i-1 , j , s1,s2 , dp) , lca(i,j-1 , s1,s2 ,dp));
}
int longestcommonsequence(  string s1 ,string s2){
    int n = s1.size() , m = s2.size();
    vector<vector<int>>dp(n+1 , vector<int>(m+1,-1));
    return lca(n-1 , m-1 , s1,s2, dp);
}
int main(){
    string s = "acd" , s2 = "ced";
    cout<<longestcommonsequence(  s , s2);
}
