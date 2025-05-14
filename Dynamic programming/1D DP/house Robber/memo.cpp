#include<bits/stdc++.h>
using namespace std ;


int solve(int ind , vector<int>&arr  , vector<int>&dp ){
    if(dp[ind] != -1) return -1 ;
    if(ind == 0 ) return arr[0];
    if(ind < 0 ) return 0 ;
    int pick = solve(ind -2 , arr , dp) + arr[ind];
    int np = 0 + arr[ind-1];
    return dp[ind] = max(pick , np);

}
int main() {
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    vector<int>dp(n , -1);
   
    cout << solve(n-1, arr , dp);

    return 0;
}

