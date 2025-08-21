#include<bits/stdc++.h>
using namespace  std ; 

int maximumProfit(int n, int fee,vector<int>arr){
    vector<int>dp(2,0);
    vector<int>cur(2,0);
   
    for(int ind =n-1 ; ind>=0 ; ind--){
        for(int buy = 0 ; buy <=1 ; buy++){
            if(buy ==0 ){
                cur[buy] = max(0+ dp[0] , -arr[ind]+dp[1]);
            }
            if(buy ==1 ){
                cur[buy] = max(0+ dp[1] , arr[ind] - fee +dp[0]);
            } 

        }
        dp = cur ; 
    }
    return  dp[0];
} 
int main() {
    vector<int> prices = {1, 3, 2, 8, 4, 9};
    int n = prices.size();
    int fee = 2;
                                 
    cout << "The maximum profit that can be generated is " << maximumProfit(n, fee, prices) << endl;
    return 0;
}
 

