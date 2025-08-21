#include<bits/stdc++.h>
using namespace std ; 

    int f( int n , int W,  vector<int>&val , vector<int>&wt){
        vector<vector<int>>dp(n, vector<int>(W+1 , -1 )) ; 
        for(int i=0 ; i<=W; i++){
            dp[0][i] = (i/wt[0])* val[0] ;
        }
        for( int ind =1 ; ind< n ; ind ++){
            for(int w = 0 ; w <= W ; w++){
                int nt = dp[ind-1][w];
                int take = INT_MIN;
                if (wt[ind]< w ){
                    take = val[ind] + dp[ind][w-wt[ind]];
                }
                dp[ind][w] = max(take , nt );
            }
        }
          return  dp[n-1][W];
    }
int main () {
    
    vector<int>val= {5,11,13} , wt = {2,4,6};
    int w = 10 ; 
    cout<<f(2 , w , val , wt );
} 
