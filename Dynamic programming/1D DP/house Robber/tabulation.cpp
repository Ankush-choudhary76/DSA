#include<bits/stdc++.h>
using namespace std ;


int solve(int ind , vector<int>&arr  , vector<int>&dp ){
    for(int i= 0 ; i<= ind ;i++){
        int pick = 0;
        if(i>1){
    pick = solve(i -2 , arr , dp) + arr[i];
        }
    int np = 0 + arr[i-1];
     dp[i] = max(pick , np);
    }
    return dp[ind];

}
int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    vector<int>dp(n , -1);
   
    cout << solve(n-1, arr , dp);

    return 0;
}
