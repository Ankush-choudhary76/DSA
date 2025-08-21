#include<bits/stdc++.h>
using namespace std ; 

int fun(vector<int>&arr , int ind , int buy , int n, vector<vector<int>>&dp  ){
    if(ind >= n ) return 0 ; 
     
    if(dp[ind][buy]!=-1) return dp[ind][buy];
    int profit = 0  ; 
    if( buy == 0){
       profit = max(0 + fun(arr , ind+1 , 0 , n  , dp ) , -arr[ind]+ fun(arr, ind+1 , 1 , n ,dp  ));
    }
    if( buy == 1){
        profit = max(0 + fun(arr , ind+1 , 1, n ,dp  ) , arr[ind]+ fun(arr, ind+2 , 0 , n  ,dp ));
    }
    return   dp[ind][buy]= profit ; 
}
int stockProfit(vector<int>prices){
    int n = prices.size();
    vector<vector<int>>dp(n , vector<int>(2 , -1));
    return fun(prices , 0 ,0,n , dp );
}


int main() {
    vector<int> prices {4, 9, 0, 4, 10};
                                 
    cout << "The maximum profit that can be generated is " << stockProfit(prices) << endl;
    return 0;
}
