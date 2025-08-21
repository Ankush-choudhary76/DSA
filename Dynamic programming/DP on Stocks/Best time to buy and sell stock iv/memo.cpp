#include<bits/stdc++.h> 
using namespace std ; 
int fun(vector<int>arr , int n , int k , int ind , int buy  , vector<vector<vector<int>>>dp){
    if(ind ==n || k==0) return 0 ; 
    if(dp[ind][buy][k]!=-1) return dp[ind][buy][k] ; 
    int profit = 0 ;
    if(buy ==0 ){
    profit  = max( 0 + fun(arr, n, k ,ind+1 , 0  ,dp), -arr[ind]+fun(arr, n, k , ind+1 , 1 , dp));
    }
    if(buy ==1 ){
       profit  = max( 0 + fun(arr, n, k ,ind+1 , 1, dp ), arr[ind]+fun(arr, n, k-1, ind+1 , 0, dp));
    }
    return dp[ind][buy][k] = profit ; 
}
 int maximumProfit(vector<int>arr, int n , int k ){
    vector<vector<vector<int>>>dp(n , vector<vector<int>>(2 , vector<int>(k+1, -1))); 
    return fun(arr , n , k , 0 , 0  , dp );
 }


int main() {
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    
    int n = prices.size();
    int k = 2;

    cout << "The maximum profit that can be generated is " << maximumProfit(prices, n, k) << endl;
    return 0;
}

