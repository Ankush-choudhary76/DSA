#include<bits/stdc++.h>
using namespace std ; 


int stockProfit(vector<int>arr){
    int n = arr.size();
    vector<vector<int>>dp(n+2, vector<int>(2 , 0));

    for(int ind = n-1 ;ind>=0 ; ind--){
        for(int buy = 0 ; buy <=1 ;buy++){
            if( buy == 0){
                dp[ind][buy]= max(0 +dp[ind+1][0] , -arr[ind]+dp[ind+1][1]);
            }
            if( buy == 1){
                dp[ind][buy]= max(0+dp[ind+1][1] ,arr[ind]+ dp[ind+2][0] );
            }  
        }
    }
   return  dp[0][0];
}


int main() {
    vector<int> prices {4, 9, 0, 4, 10};
                                 
    cout << "The maximum profit that can be generated is " << stockProfit(prices) << endl;
    return 0;
}
