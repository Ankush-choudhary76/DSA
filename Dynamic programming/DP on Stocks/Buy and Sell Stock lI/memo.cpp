#include<bits/stdc++.h>
using namespace std ; 

int gmp(vector<int>&arr , int ind , int buy , int n , vector<vector<int>>&dp) {
    if(ind == n ) return 0 ; 

    if(dp[ind][buy]!= -1) return dp[ind][buy];

    int profit = 0 ; 

    if(buy==0){
        profit = max(0 + gmp(arr, ind+1, 0 ,n,dp) , -arr[ind]+ gmp(arr, ind+1 , 1 ,n,dp));
    } 
    if(buy  == 1){
        profit = max(0 + gmp(arr, ind+1, 1 ,n,dp) , arr[ind]+ gmp(arr,ind+1 , 0,n,dp));
    }
    
    return dp[ind][buy] = profit ; 
}
int getMaxPrice(vector<int>arr ,  int n ){
    vector<vector<int>>dp(n , vector<int>(2, -1));
     
    return gmp(arr , 0, 0, n, dp);
 }
int main(){
    vector<int>arr={7, 1, 5, 3, 6, 4};
    int n = arr.size();
    cout<<getMaxPrice(arr, n );
}

