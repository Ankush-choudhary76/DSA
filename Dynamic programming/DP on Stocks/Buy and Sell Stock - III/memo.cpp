#include<bits/stdc++.h>
using namespace std ; 
int Maxp(vector<int>arr , int ind , int buy , int n , int cap ,vector<vector<vector<int>>>&dp){
    if(ind == n || cap == 0) return 0 ; 
    
    if (dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
    int profit = 0 ;
        if(buy == 0 ){
        profit = max( 0 + Maxp(arr , ind+1 , 0  , n , cap , dp), 
                      -arr[ind] + Maxp(arr , ind+1 , 1  , n , cap , dp)) ;
        }
        if(buy == 1 ){
            profit = max( 0 + Maxp(arr , ind+1 , 1  , n , cap , dp), 
                        arr[ind] + Maxp(arr , ind+1 , 0  , n , cap-1 , dp )) ;
        }
        return  dp[ind][buy][cap]=  profit ; 
    
}
int Maxprice(vector<int>arr ,int cap  ){
    int n = arr.size();
    vector<vector<vector<int>>>dp(n ,vector<vector<int>>(2, vector<int>(cap+1, -1)));
     return Maxp(arr , 0 , 0 ,n, cap , dp);
}
int main (){
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int k = 2 ; 
    cout<<Maxprice(prices  ,  k );
}
