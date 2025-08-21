#include<bits/stdc++.h>
using namespace std ; 
int unbound(int ind , int w  , vector<int>&val , vector<int>&wt , vector<vector<int>>&dp ){
        if(ind ==0 )return (w/wt[0]) * val[0] ; 
        if(dp[ind][w] != -1  ) return dp[ind][w] ; 
       int nt = 0+ unbound(ind-1 , w , val , wt ,dp );
       int take = 0; 
       if(wt[ind]<= w ){
         take = val[ind] + unbound(ind , w - wt[ind] , val , wt ,dp ) ; 
       }
       return dp[ind][w ] =  max(take , nt );
    }
    int f( int n , int w ,  vector<int>&val , vector<int>&wt){
        vector<vector<int>>dp(n, vector<int>(w+1 , -1 )) ; 
        return unbound(n-1 , w , val ,wt , dp );
    }
int main () {
    
    vector<int>val= {5,11,13} , wt = {2,4,6};
    int w = 10 ; 
    cout<<f(2 , w , val , wt );
} 
