#include<bits/stdc++.h>
using namespace std ; 


int getMaxPrice(vector<int>arr ,  int n ){
    vector<vector<int>>dp(n+1 , vector<int>(2, -1));
    dp[n][0]=dp[n][1]=0 ;

    for(int ind = n-1 ; ind>=0 ; ind--){
        for(int buy = 0 ; buy <=1 ; buy++){
            int profit = 0 ; 

            if(buy==0){
                profit = max(0 + dp[ind+1][0] , -arr[ind]+ dp[ind+1][1]);
            } 
            if(buy  == 1){
                profit = max(0 +  dp[ind+1][1] , arr[ind]+ dp[ind+1][0]);
            } 
            dp[ind][buy] = profit ;
        }
    } 
   
    return dp[0][0]  ;
 }
int main(){
    vector<int>arr={7, 1, 5, 3, 6, 4};
    int n = arr.size();
    cout<<getMaxPrice(arr, n );
}
