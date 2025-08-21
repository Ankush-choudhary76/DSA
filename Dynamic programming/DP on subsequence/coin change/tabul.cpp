#include<bits/stdc++.h>
using namespace std ;
int  coinchangr(int n, int  tar , vector<int>&arr) {
    vector<vector<int>>dp( n  , vector<int>(tar+1 , 0));
    for(int i= 0 ; i<= tar ; i++){
        if(i % arr[0] == 0) {
            dp[0][i] = 1 ; 
        }
    }
     for(int ind = 1 ; ind < n ; ind ++ ){
        for(int target = 0 ; target <=  tar ; target++){
               int nt = dp[ind-1][target];
               int take = 0 ;
               if(arr[ind]<= target ){
                take = dp[ind] [target - arr[ind]] ; 
               }
               dp[ind][target] = nt + take  ; 
         }
    }
    return dp[n-1][tar] ; 
}
int main (){
    vector<int>arr = {1,2,3} ;
    int tar = 4 ;
    cout<<coinchangr(arr.size() , tar , arr) ; 
}
