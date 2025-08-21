#include<bits/stdc++.h>
using namespace std ; 


int getMaxPrice(vector<int>arr ,  int n ){
     vector<int>dp(2, 0);
     vector<int>cur(2, 0);
     

    for(int ind = n-1 ; ind>=0 ; ind--){
        for(int buy = 0 ; buy <=1 ; buy++){
            int profit = 0 ; 

            if(buy==0){
                profit = max(0 + dp[0] , -arr[ind]+ dp[1]);
            } 
            if(buy  == 1){
                profit = max(0 +  dp[1] , arr[ind]+ dp[0]);
            } 
            cur[buy] = profit ;
        }
        dp=cur;
    } 
   
    return dp[0]  ;
 }
int main(){
    vector<int>arr={7, 1, 5, 3, 6, 4};
    int n = arr.size();
    cout<<getMaxPrice(arr, n );
}
