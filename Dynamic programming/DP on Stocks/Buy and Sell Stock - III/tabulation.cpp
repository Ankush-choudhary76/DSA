#include<bits/stdc++.h>
using namespace std ; 
int Maxprice(vector<int>arr , int k ){
   
    int n = arr.size();
    vector<vector<vector<int>>>dp(n+1 ,vector<vector<int>>(2, vector<int>(k+1,0)));
     
    for(int ind = n-1  ; ind >=0 ;  ind--){
        for(int buy = 0 ; buy<=1 ; buy ++){
            for(int cap = 1 ; cap<=k; cap++){
    
                if(buy ==0 ){
                    dp[ind][buy][cap]= max(0 + dp[ind+1][0][cap]  , -arr[ind] +dp[ind+1][1][cap] );
                    } 
                if(buy ==1 ){
                    dp[ind][buy][cap]=  max(0 + dp[ind+1][1][cap]  , arr[ind] +dp[ind+1][0][cap-1] );
                }   
            }
        }
    }

     return dp[0][0][k];
}

int main (){
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int k = 2 ; 
    cout<<Maxprice(prices  ,  k );
}
