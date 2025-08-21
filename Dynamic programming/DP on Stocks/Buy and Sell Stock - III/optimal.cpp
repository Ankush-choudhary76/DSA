#include<bits/stdc++.h>
using namespace std ; 
int Maxprice(vector<int>arr , int k ){
   
    int n = arr.size();
    vector<vector<int>>dp(2, vector<int>(k+1,0));
    vector<vector<int>>cur(2, vector<int>(k+1,0));


    for(int ind = n-1  ; ind >=0 ;  ind--){ 
        for(int buy = 0 ; buy<=1 ; buy ++){
            for(int cap = 1 ; cap<=k; cap++){
    
                if(buy ==0 ){
                    cur[buy][cap]= max(0 + dp[0][cap]  , -arr[ind] +dp[1][cap] );
                } 
                if(buy ==1 ){
                    cur[buy][cap]=  max(0 + dp[1][cap]  , arr[ind] +dp[0][cap-1] );
                }   
            }
        }
        dp = cur ; 
    }
    return dp[0][k];
}

int main (){
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int k = 2 ; 
    cout<<Maxprice(prices  ,  k );
}
